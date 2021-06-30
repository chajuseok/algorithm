#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

int answer(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	int ans = answer(n - 1) + answer(n - 2);
	return ans;
}

int main(){

	int n;
	cin >> n;
	
	cout <<  answer(n);
}