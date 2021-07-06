#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;



int error(string* a, int h, int w) {
	int min = 100;
	for (int i = 0; i < h - 7; i++) {
		for (int j = 0; j < w - 7; j++) {
			int wcount = 0;
			int bcount = 0;
			for (int t = i; t < i + 8; t++) {
				for (int k = j; k < j + 8; k++) {
					if ((t + k) % 2 == 0) {
						if (a[t][k] == 'B') {
							wcount++;
						}
						else {
							bcount++;
						}
					}
					else {
						if (a[t][k] == 'B') {
							bcount++;
						}
						else {
							wcount++;
						}
					}
				}
			}
			if (min > bcount) {
				min = bcount;
			}
			if (min > wcount) {
				min = wcount;
			}

			
		}
	}
	return min;
}


int main()
{
	int h, w;
	cin >> h >> w;
	string a[50];

	for (int i = 0; i < h; i++) {
	
		cin >> a[i];
	}

	cout << error(a, h, w);
}