#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;


int dp[501];

int main() {

	int n;
	cin >> n;

	vector<pair<int, int>> v;

	for (int i = 0; i < n; i++) {

		int a, b;
		cin >> a >> b;
		v.push_back(pair<int, int>(a, b));

	}
	sort(v.begin(), v.end());
	int max1 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (v[i].second > v[j].second) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		max1 = max(max1, dp[i]);
	}
	cout << n - (max1 + 1);

}