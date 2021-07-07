#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>

using namespace std;

int main() {

	vector<int> a;
	int n, t;
	cin >> n;
	map<int, int> m;
	map<int, int> ::iterator it;
	vector<int> temp;
	int sum = 0;
	int max = 0;
	for (int i = 0; i < n; i++) {
		cin >> t;
		a.push_back(t);
		m[t]++;
		sum += t;
	}
	sort(a.begin(), a.end());

	for (it = m.begin(); it != m.end(); it++) {
		if (it->second > max) {
			max = it->second;
		}
	}
	for (it = m.begin(); it != m.end(); it++) {
		if (it->second == max) {
			temp.push_back(it->first);
		}
	}
	
	
	
	cout << round((double)sum / n )<< endl;
	cout << a[(n / 2)] << endl;
	if (temp.size() == 1) {
		cout << temp[0] << endl;
	}
	else {
		cout << temp[1] << endl;
	}
	cout << a[n - 1] - a[0];
	
	
	

}