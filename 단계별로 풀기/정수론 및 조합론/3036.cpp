#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>

using namespace std;

int GCD(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return GCD(b, a % b);
	}
}


int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int r = a[0];
	for (int i = 1; i < n; i++) {
		int temp = GCD(r, a[i]);
		cout << r / temp << "/" << a[i] / temp << '\n';
	}
	
}