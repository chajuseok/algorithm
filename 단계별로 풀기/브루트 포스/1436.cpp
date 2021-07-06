#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;



int find(int n) {
	int count = 0;
	for (int i = 666; i <= 10000000; i++) {
		string temp = to_string(i);
		for (int j = 0; j < temp.size() - 2; j++) {
			if (temp[j] == temp[j + 1] && temp[j + 1] == temp[j + 2] && temp[j] == '6') {
				count++;
				if (count == n) {
					return i;
				}
				break;
			}
		}
	}
}


int main()
{
	int t;
	cin >> t;

	cout << find(t)<<endl;

}