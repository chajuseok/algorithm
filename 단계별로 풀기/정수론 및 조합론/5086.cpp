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
	vector<int> a;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		a.push_back(temp);
	}
	sort(a, a + n);
	cout << a[0] * a[n - 1];

}