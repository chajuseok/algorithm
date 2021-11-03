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
	int t = 1;
	cin >> n;
	stack<int> st;
	vector<char> v;
	bool answer = true;
	st.push(0);
	int p = 1;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (st.top() < temp) {
			while (st.top() < temp) {
				st.push(t);
				t++;
				v.push_back('+');
			}
		}
		else {
			if (st.top() != temp) {
				answer = false;
			
			}
		}

		st.pop();
		v.push_back('-');
	}

	if (answer) {
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << "\n";
		}
	}
	else {
		cout << "NO";
	}

}