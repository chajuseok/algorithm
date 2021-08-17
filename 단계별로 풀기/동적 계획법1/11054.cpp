#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

int a[1001];
int dp[1001][2];
int k[1001];

int main() {

	int n;
	cin >> n;
	int answer = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];

	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[i] > a[j]) {
				dp[i][0] = max(dp[i][0], dp[j][0] + 1);
			}

		}

	}
	for (int i = n - 1; i >= 0; i--) {
		for (int j = n - 1; j > i; j--) {
			if (a[i] > a[j]) {
				dp[i][1] = max(dp[i][1], dp[j][1] + 1);
			}
		}
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			k[i] += dp[i][j];

		}

		answer = max(answer, k[i]);
	}
	cout << answer + 1;

}