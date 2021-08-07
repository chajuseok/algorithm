#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int n, m;
int arr[9];
bool visited[9];

void func(int cnt) {

	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			arr[cnt] = i;
			func(cnt + 1);
			visited[i] = false;
		}
	}
}


int main() {
	cin >> n >> m;
	func(0);
}