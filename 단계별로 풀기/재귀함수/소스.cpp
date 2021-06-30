#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

int answer(int n) {
	int ans = 1;
	if (n == 0) {
		return ans;
	}
	ans = n * answer(n - 1);
	return ans;
}

int main(){

	int n;
	cin >> n;
	
	cout <<  answer(n);
}