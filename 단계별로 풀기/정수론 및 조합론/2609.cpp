#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>

using namespace std;


int main() {
	int n;
	int m = 100000000;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;

		for (int j = 1; j <= a*b; j++) {
			if (i % a == 0 && i % b == 0) {
				m = min(m, i);
			}
		}
		cout << m;
		cout << '\n';
		m = 100000000;
	}

}