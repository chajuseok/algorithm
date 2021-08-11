#include<stdio.h>
#include<iostream>

using namespace std;

int a[9][9];
bool row[9][10];
bool col[9][10];
bool square[9][10];

int box(int row, int col){

	int number = (row / 3) * 3 + (col / 3);
	return number;

}

void func(int cnt) {
	if (cnt == 81) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
		exit(0);
	}
	int x = cnt / 9;
	int y = cnt % 9;
	int c = box(x, y);

	if (a[x][y] != 0) {
		func(cnt + 1);
	}
	else {
		for (int t = 1; t <= 9; t++) {
			if (!row[x][t] && !col[y][t] && !square[c][t]) {
				a[x][y] = t;
				row[x][t] = true;
				col[y][t] = true;
				square[c][t] = true;
				func(cnt + 1);
				a[x][y] = 0;
				row[x][t] = false;
				col[y][t] = false;
				square[c][t] = false;

			}
		}
	}


}

int main() {

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> a[i][j];
			if (a[i][j] != 0) {
				row[i][a[i][j]] = true;
				col[j][a[i][j]] = true;
				square[box(i, j)][a[i][j]] = true;
			}
		}
		
	}
	func(0);

}