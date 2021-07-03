#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;


int error(char*a, int h, int w) {
	int min = 64;
	int count= 0;
	for (int i = 0; i < w - 7; i++) {
		for (int j = 0; j < h - 7; j++) {
			for (int t = i; t < i + 7; t++) {
				for (int  k= j; k < j + 7; k++) {
					if (a[k][t] == a[k][t + 1]) {
						count++;
					}
					if (a[k][t] == a[k + 1][t]) {
						count++;
					}
				}
			}
			if (min > count) {
				min = count;
			}
		}
	}
	return count;
}


int main() {

	int h,w;
	cin >> h >> w;
	char a[w][h];
	cout << error(a);


	

	


}