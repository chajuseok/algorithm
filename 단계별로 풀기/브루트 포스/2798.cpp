#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;




int main() {

	int n;
	cin >> n;

	int* data;
	data = new int[n];

	int max;
	cin >> max;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		data[i] = a;
	}

	int sum = 0;
	for (int i = 0; i < n-2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				int temp = data[i] + data[j] + data[k];
				if (temp > max) {
					continue;
				}
				if (temp > sum) {
					sum = temp;
				}
			}
		}
	}
	cout << sum;




}