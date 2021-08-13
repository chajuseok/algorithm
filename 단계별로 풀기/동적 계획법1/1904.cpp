#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;
int n;
int tile[1000001] = { 0,1,2 };

int func(int n) {
	if (tile[n] == 0) {
		tile[n] = (func(n - 2) + func(n - 1))% 15746;
	}
	return tile[n];
}


int main() {

	cin >> n;
	cout << func(n);



}