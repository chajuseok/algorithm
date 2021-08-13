#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

int used[4];
int n;
int a[12];
int max1 = -100000000;
int min1 = 100000000;

void func(int cnt, int sum1) {

	

	if (cnt == n) {
		max1 = max(sum1, max1);
		min1 = min(sum1, min1);
		
		return;
	}


	for (int i = 0; i < 4; i++) {
	
		if (used[i] > 0) {
			used[i]--;
			if (i == 0) {
				func(cnt + 1, sum1 + a[cnt]);
			}
			else if (i == 1) {
				func(cnt + 1, sum1 - a[cnt]);
			}
			else if (i == 2) {
				func(cnt + 1, sum1 * a[cnt]);
			}
			else {
				func(cnt + 1, sum1 / a[cnt]);
			}
		
			used[i]++;
		}
		
	}
	return;

}


int main() {

	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> used[i];
	}
	func(1, a[0]);
	cout << max1 << "\n";
	cout << min1;




}