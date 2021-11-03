#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
#include<queue>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	queue<int> q;
	cout << "<";
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	int t = 0;
	vector<int> v;
	while (!q.empty()) {
		for (int i = 0; i < k - 1; i++) {
			int a = q.front();
			q.pop();
			q.push(a);
		}
		v.push_back(q.front());
		q.pop();
	}
	for (int i = 0; i < n; i++) {
		if (i == n - 1) {
			cout << v[i];
		}
		else {
			cout << v[i] << ", ";
		}
	}
	cout << ">";
}