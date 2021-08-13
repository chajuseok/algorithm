#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int a[20][20];
int n;
int min1 = 1000000000;

bool used[20];
int total(bool used[20]) {
	int team1 = 0;
	int team2 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (used[i] && used[j]) {
				team1 += a[i][j];
			}
			else if((!used[i])&& (!used[j])){
				team2 += a[i][j];
			}
		}
	}
	return abs(team1 - team2);
}

void func(int cnt, int c) {

	if (cnt == n / 2) {
		int sum1 = total(used);
		min1 = min(min1, sum1);
		return;
	}
	for (int i = c; i < n; i++) {
		if (!used[i]) {
			used[i] = true;
			func(cnt + 1,i+1);
			used[i] = false;
		}
	}
	return;
}
int main() {
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	func(0, 1);
	cout << min1;
}