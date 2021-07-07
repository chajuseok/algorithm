#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main() {


	priority_queue<int, vector<int>, greater<int>> a;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		a.push(b);
	}
	for (int i = 0; i < n; i++) {
		cout << a.top() << endl;
		a.pop();
	}

}