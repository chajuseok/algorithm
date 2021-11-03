#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>

using namespace std;

int GCD(int a, int b) {
	if (b == 0) return a;
	else return GCD(b, a % b);
}


int main() {
	int n;
	cin >> n;
	vector<int> a;
	vector<int> answer;

	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		a.push_back(t);
	}

	sort(a.begin(), a.end());
	int temp = a[1] - a[0];
	for (int i = 2; i < n; i++) {
		temp = GCD(temp, a[i] - a[i - 1]);
	}
	for (int i = 1; i * i <= temp; i++) {
		if (temp % i == 0) {
			answer.push_back(i);
			if (i * i != temp) {
				answer.push_back(temp / i);
			}
		}
	}
	sort(answer.begin(), answer.end());

	for (int i = 1; i < answer.size(); i++) {
		cout << answer[i] << " ";
	}

}