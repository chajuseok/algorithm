#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int finumber[50] = { 0,1, };
int fibonacci(int n) {
	if (n < 2) {
		return finumber[n];
	}
	if (finumber[n] == 0) {
		finumber[n] = fibonacci(n-2) + fibonacci(n-1);
	}
	return finumber[n];

	
}

int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		if (t == 0) {
			cout << "1 0" << "\n";
		}
		else{ 
			fibonacci(t);
			cout << finumber[t - 1] << " " << finumber[t];
			cout << "\n";
		}
	}
}