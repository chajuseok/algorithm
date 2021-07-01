#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;



int answer(int n)
{
	int total = 0;
	while (n > 0) {
		int temp = n % 10;
		n = n / 10;
		total += temp;
	}
	return total;
}



int main() {

	int n;
	cin >> n;
	int total;
	for (int i = 1; i < n; i++) {
		total = i + answer(i);
		if (total == n) {
			cout << i;
			break;
		}
	}
	if (total != n) {
		cout << 0;
	}



}