#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

int house[1001][3];


int main() {
	int n;
	cin >> n;
	int a[3];
	for (int i = 1; i <= n; i++) {
		cin >> a[0] >> a[1] >> a[2];
		house[i][0] = min(house[i - 1][1], house[i - 1][2]) + a[0];
		house[i][1] = min(house[i - 1][0], house[i - 1][2]) + a[1];
		house[i][2] = min(house[i - 1][1], house[i - 1][0]) + a[2];
	}
	cout << min(min(house[n][0], house[n][1]), house[n][2]);


}