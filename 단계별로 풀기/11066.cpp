#include<iostream>
#include<vector>
using namespace std;

#define INF 1000000000

int testCase;
int n;
int file[501];
int sum[501];
int dp[501][501];

int solution(){
   cin >> n;
   for(int i =1; i<=n; i++){
      int k;
      cin >> k;
      file[i] = k;
   }
   for(int i = 1; i <=n; i++){
      sum[i] = sum[i-1] + file[i];
   }
   for(int i = 1; i<=n; i++){
      for(int j = 1; j<= n-i; j++){
         dp[j][j+i] = INF;
         for(int k = j; k<i+j; k++){
            dp[j][j+i] = min(dp[j][i+j], dp[j][k] + dp[k+1][j+i] + sum[j+i] - sum[j-1]);

         }
      }
   }
   cout << dp[1][n] << endl;

}


int main(){
   
   cin >> testCase;

   for(int i =0; i<testCase; i++){
      solution();
   }
   



}
