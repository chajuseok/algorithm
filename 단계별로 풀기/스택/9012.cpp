#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
#include<stack>
using namespace std;

void vps(string a) {
	stack<char> st;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '(') {
			st.push(a[i]);
		}
		else {
			if (st.empty()) {
				cout << "NO"<<'\n';
				return;
			}
			st.pop();
		}
	}
	if (st.empty()) {
		cout << "YES"<<'\n';
	}
	else {
		cout << "NO" << '\n';
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		vps(str);
	}
}