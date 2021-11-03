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
	cin >> n;
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	int t = 0;
	vector<int> v;
	while (!q.empty()) {
		t++;
		int a = q.front();
		q.pop();
		if (t % 3 == 0) {
			v.push_back(a);
		}
		else {
			q.push(a);
		}
	}
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			cout << "<" << v[0] << ", ";
		}
		else if (i == n - 1) {
			cout << v[n - 1] << ">";
		}
		else {
			cout << v[i] << ", ";
		}
	}
}