#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

int pa[101] = { 0,1,1,1 };

int func(int n) {

	if (tile[n] == 0) {
		tile[n] = (func(n - 2) + func(n - 3));
	}
	return tile[n];
}


int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cout << "5";
	}
	




}