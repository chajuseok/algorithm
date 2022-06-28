#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>

using namespace std;

int n;
int map[26][26];
int visited[26][26];

int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};
int cnt = 0;

void dfs(int x, int y){
   visited[y][x] = 1;
   cnt++;
   for(int i=0; i<4; i++){
      int nx = x + dx[i];
      int ny = y + dy[i];
      if(nx >=0 && ny >=0 && nx < n && ny <n && map[ny][nx] == 1 && visited[ny][nx] == 0){
         dfs(nx, ny);
      }
   }
}

int main(){
   cin >> n;
   string str;
   vector<int> v;

   for(int i =0; i<n; i++){
      cin >> str;
      for(int j = 0; j<n; j++){
         map[i][j] = str[j] - '0';
      }
   }
  
   for(int i = 0; i<n; i++){
      for(int j = 0; j<n; j++){
         if(map[i][j] == 1 && visited[i][j] == 0){
            dfs(j, i);
            v.push_back(cnt);
    
         }
         cnt =0;
      }
   }
   cout << v.size() << "\n";
   sort(v.begin(), v.end());
   for(int i =0; i<v.size(); i++){
      cout << v[i] << "\n";
   }


}
