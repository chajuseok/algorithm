#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>

using namespace std;


int main() {
	int a, b;
	cin >> a >> b;
	while (a != 0 || b != 0) {
		if (b / a != 0 && b%a==0) {
			cout << "factor";
			cout << '\n';
		}
		else if(a / b != 0 && a%b ==0) {
			cout << "multiple"
			cout << '\n';
		}
		else {
			cout << "neither";
			cout << '\n';
		}
		cin >> a >> b;
	}
}