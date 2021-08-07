#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cmath>

using namespace std;

int main() {


	int n;
	cin >> n;
	priority_queue<int, vector<int>, less<int>> q;

	while (n > 0) {
		q.push(n % 10);
		n = n / 10;
	}
	while (!q.empty()) {
		cout << q.top();
		q.pop();
	}


}