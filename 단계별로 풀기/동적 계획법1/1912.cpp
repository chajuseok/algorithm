#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>

using namespace std;

int dp[100001];

int main() {
	
	int n;
	cin >> n;
	int data[100001];
	for (int i = 0; i < n; i++) {
		cin >> data[i];
	}
	int answer = -1000;
	dp[0] = data[0];
	for (int i = 1; i < n; i++) {
		if (dp[i - 1] < 0) {
			dp[i] = data[i];
		}
		else {
			dp[i] = dp[i - 1] + data[i];
		}
		answer = max(answer, dp[i]);
	}
	answer = max(answer, dp[0]);
	cout << answer;
}