#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
#include<queue>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		int a, b;
		int answer = 0;
		cin >> a >> b;

		for (int j = 0; j < a; j++) {
			int g;
			cin >> g;
			q.push(make_pair(j, g));
			pq.push(g);
			
		}
		while (!q.empty()) {
			int index = q.front().first;
			int value = q.front().second;
			q.pop();
			if (value == pq.top()) {
				pq.pop();
				answer++;
				if (index == b) {
					cout << answer << '\n';
					break;
				}
			}
			else {
				q.push(make_pair(index, value));
			}
		}
		

	}
	

}