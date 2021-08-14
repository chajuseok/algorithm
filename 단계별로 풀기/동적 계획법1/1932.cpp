#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

int pi[501][501];


int main() {
	int n;
	cin >> n;
	for (int i = 1; i <=n; i++) {
		for (int j = 1; j <= i; j++) {
			int a;
			cin >> a;
			pi[i][j] = max(pi[i - 1][j-1], pi[i - 1][j]) + a;
		}
	}
	int max1 = 0;
	for (int i = 1; i <= n; i++) {
		max1 = max(max1, pi[n][i]);
	}
	cout << max1;
}