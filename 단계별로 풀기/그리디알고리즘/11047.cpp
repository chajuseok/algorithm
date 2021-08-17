#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>

using namespace std;



int main() {
	
	int n, k;
	cin >> n >> k;
	vector <int> a;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		a.push_back(temp);
	}
	int answer = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (k >= a[i]) {
			answer += k / a[i];
			k = k % a[i];
		}
		if (k <= 0) {
			break;
		}
	}
	cout << answer;

}