#include<iostream>
#include<vector>
#include<string>
#include<math.h>

using namespace std;

int n, m;
bool dp[31][15001];
int weight[31];


void solution(int i, int w){
   
   if(i > n || dp[i][w]) return;
   dp[i][w] = true;
   solution(i+1, w + weight[i]);
   solution(i+1, abs(w - weight[i]));
   solution(i+1, w);

}


int main(){

   cin >> n ;
   int testcase;
   for(int i =0; i<n; i++){
      cin >> weight[i];
   }
   solution(0,0);

   cin >> m;

   for(int i = 0; i<m; i++){
      cin >> testcase;
      if(testcase > 15000) cout << "N" << " ";
      else if(dp[n][testcase]){
         cout << "Y" << " ";
      }
      else{
         cout << "N" << " ";
      }
   }
}
