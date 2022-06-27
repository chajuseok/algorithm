#include<iostream>
#include<vector>
#include<string>
#define INT_MAX 1000000000
using namespace std;


int n;
vector<pair<int, int>> v;
int dp[501][501];
int sum[501]; 


int main(){
   
   cin >> n;
   v.push_back(make_pair(0,0));
   for(int i = 0; i<n ;i++){
      int a,b;
      cin >> a >> b;
      v.push_back(make_pair(a,b));
   }

   for(int i = 1; i<=n; i++){
      for(int s = 1; s<=n-i; s++){
         dp[s][s+i] = INT_MAX;
         for(int mid = s; mid<=s+i; mid++){
            dp[s][s+i] = min(dp[s][s+i], dp[s][mid] + dp[mid+1][s+i] + v[s].first * v[mid].second*v[s+i].second);
         }
      }
   }
   cout << dp[1][n];
}
