#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
#include<stack>
using namespace std;

int main() {
	stack<int> st;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		if (a == "push") {
			int temp;
			cin >> temp;
			st.push(temp);
		}
		if (a == "pop") {
			if (st.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << st.top() << '\n';
				st.pop();
			}
		}
		if (a == "top") {
			if (st.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << st.top() << '\n';
			}
		}
		if (a == "empty") {
			cout << st.empty()<<'\n';
		}
		if (a == "size") {
			cout << st.size()<< '\n';
		}
	}


}