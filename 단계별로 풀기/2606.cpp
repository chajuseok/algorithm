#include<iostream>
#include<vector>
#include<string>

using namespace std;

int n;
int node1, node2;
int map[101][101];
int visited[101];
int count = 0;
int b;

void dfs(int s){

   visited[s] = 1;
   count++;
   for(int i =1; i<=b; i++){
      if(visited[i] == 0 && map[s][i] == 1){
         dfs(i);
      }
   }

}



int main(){
   
   cin >> b;
   cin >> n;
   for(int i = 0; i<n; i++){
      cin >> node1 >> node2; 
      map[node1][node2] = 1;
      map[node2][node1] = 1;

   }
   dfs(1);
   cout << count-1;

}
