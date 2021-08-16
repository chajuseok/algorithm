#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

int m1[1000001] = { 0,0 };

int func(int n) {

	m1[n] = m1[n - 1] + 1;
	if (n % 2 == 0) {
		m1[n] = min(m1[n], m1[n / 2] + 1);
	}
	if (n % 3 == 0) {
		m1[n] = min(m1[n], m1[n / 3] + 1);
	}
	return m1[n];
}


int main() {
	int n;
	cin >> n;

	for (int i = 2; i <= n; i++) {
		func(i);
	}
	cout << m1[n];
}