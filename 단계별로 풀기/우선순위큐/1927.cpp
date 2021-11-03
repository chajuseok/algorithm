#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
#include<queue>

using namespace std;

int main() {
	cin.tie(0);
	priority_queue<int, vector<int>, greater<int>> q;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		if (t == 0) {
			if (q.empty()) {
				cout << 0;
			}
			else {
				cout << q.top();
				q.pop();
			}
			cout << "\n";
		}
		else {
			q.push(t);
		}
	}
}