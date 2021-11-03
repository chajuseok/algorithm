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
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int temp;
		cin >> temp;
		if (temp == 0) {
			st.pop();
		}
		else {
			st.push(temp);
		}
	}
	int answer = 0;
	
	while(!st.empty()) {
		answer += st.top();
		st.pop();
	}
	cout << answer;
}