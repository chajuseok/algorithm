#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
#include<queue>
using namespace std;

int main() {
	int n;
	cin.tie(0);
	cin.sync_with_stdio(0);
	cin >> n;
	queue<int> q;
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		if (a == "push") {
			int temp;
			cin >> temp;
			q.push(temp);
		}
		else if (a == "front") {
			if (q.empty()) {
				cout << -1;
			}
			else {
				cout << q.front();
			}
			cout << "\n";
		}
		else if (a == "back") {
			if (q.empty()) cout << -1;
			else cout << q.back();

			cout << "\n";

		}
		else if (a == "pop") {
			if (q.empty()) cout << -1;

			else {
				cout << q.front();
				q.pop();
			}
			cout << "\n";
		}
		else if (a == "size") {
			cout << q.size();
			cout << "\n";
		}
		else if (a == "empty") {
			cout << q.empty();
			cout << "\n";
		}
	
	}
}