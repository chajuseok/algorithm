#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

int stair[301];
int up[301] = { 0 };


int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> stair[i];
	}
	up[1] = stair[1];
	up[2] = max(stair[1] + stair[2], stair[2]);
	up[3] = max(stair[1] + stair[3], stair[2] + stair[3]);
	for (int i = 4; i <= n; i++) {
		up[i] = max(stair[i] + up[i - 2], stair[i] + stair[i - 1] + up[i - 3]);
	}
	cout << up[n];


}