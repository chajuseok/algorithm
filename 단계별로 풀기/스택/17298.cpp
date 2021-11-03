#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
#include<stack>
using namespace std;


int main() {

	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> answer(n, -1);
	stack<int> st;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		while (!st.empty() && a[st.top()] < a[i]) {
			answer[st.top()] = a[i];
			st.pop();
		}
		st.push(i);
	}
	for (int i = 0; i < n; i++) {
		cout << answer[i] << " ";
	}

}
