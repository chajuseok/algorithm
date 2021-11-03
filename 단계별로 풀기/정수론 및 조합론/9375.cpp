#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
#include<map>
using namespace std;

map<string, int> ::iterator it;

int main() {
	
	int a;
	cin >> a;
	string t = to_string(a);
	int answer = 0;
	for (int i = t.length()-1; i >=0; i++) {
		if (t[i] == '0') {
			answer++;
		}
		else {
			break;
		}
	}
	cout << answer;
}