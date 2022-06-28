#include<iostream>
#include<vector>
#include<string>
#include<queue>

using namespace std;


int m,n;
int map[501][501];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int dp[501][501];



int DFS(int x, int y){
   
   if(x == n-1 && y == m-1) return 1;
   if(dp[y][x] != -1) return dp[y][x];

   dp[y][x] = 0;
   for(int i = 0; i<4; i++){
      int nx = x + dx[i];
      int ny = y + dy[i];
      if(nx >=0 && ny >=0 && nx <n && ny <m){
         if(map[ny][nx] < map[y][x]){
            dp[y][x] = dp[y][x] + DFS(nx,ny);
            
         }
      }
   }
   return dp[y][x];

}

int main(){
   
   cin >> m >> n;
   for(int i = 0; i<m; i++){
      for(int j=0; j<n; j++){
         cin >> map[i][j];
         dp[i][j] = -1;
      }
   }
   DFS(0,0);
   cout << dp[0][0];

}
