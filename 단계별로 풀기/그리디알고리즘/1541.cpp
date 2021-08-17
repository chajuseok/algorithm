#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>

using namespace std;


int main() {

	int answer = 0;
	string a;
	cin >> a;
	string temp = "";
	bool t = false;
	for (int i = 0; i <=a.length(); i++) {
		if (a[i] == '-' || a[i] == '+' || i == a.length()) {
			if (t) {
				answer -= stoi(temp);
				temp = "";
			}
			else {
				answer += stoi(temp);
				temp = "";
			}
		}
		else {
			temp += a[i];
		}
		if (a[i] == '-') {
			t = true;
		}
	}
	cout << answer;
}