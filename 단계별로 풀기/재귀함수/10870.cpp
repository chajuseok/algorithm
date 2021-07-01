#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

void answer() {
	cout >> "***" >> endl;
	cout >> "* *" >> endl;
	cout >> "***";
}

int main(){

	int n;
	cin >> n;
	
	cout << 3;


	for (int i = 0; i < n / 3; i++) {
		for (int j = 0; j < n / 3; j++) {
			answer();
		}
		cout << endl;
	}
}