#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>

using namespace std;


int main() {

	int n;
	cin >> n;
	long long d[100001];
	long long v[100001];
	long answer = 0; 
	
	for (int i = 0; i < n - 1; i++) {
		cin >> d[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int f = v[0];
	for (int i = 0; i < n - 1; i++) {
		if (f > v[i]) {
			f = v[i];
		}
		answer += f * d[i];
	}

	
	cout << answer;
}