#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
#include<deque>

using namespace std;

string m[65];
string answer = "";

int zero;
int one;

void func(int x, int y, int size) {
    
    zero = 0;
    one = 0;
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {

            if (m[i][j] == '0') {
                zero++;
            }
            else if (m[i][j] == '1') {
                one++;
            }
        }
    }
    if (zero == size * size) {
        answer += "0";
    }
    else if (one == size * size) {
        answer += "1";
    }
    else {
        answer += "(";
        func(x, y, size / 2);
        func(x, y + size / 2, size / 2);
        func(x + size / 2, y, size / 2);
        func(x + size / 2, y + size / 2, size / 2);
        answer += ")";
    }
}

int main() {
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }
    func(0, 0, n);
    
    cout << answer;

}