#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
#include<deque>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int answer = 0;
    deque<int> dq;
    for (int i = 1; i <= n; i++) {
        dq.push_back(i);
    }
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        int index;
        for (int j = 0; j < dq.size(); j++) {
            if (dq[j] == t) {
                index = j;
                break;
            }
        }
        if (index < dq.size() - index) {
            while (1) {
                if (dq.front() == t) {
                    dq.pop_front();
                    break;
                }
                int temp = dq.front();
                dq.pop_front();
                dq.push_back(temp);
                answer++;
            }
        }
        else {
            while (1) {
                if (dq.front() == t) {
                    dq.pop_front();
                    break;
                }
                int temp = dq.back();
                dq.push_front(temp);
                dq.pop_back();
                answer++;
            }
        }
    }
    cout << answer;

}