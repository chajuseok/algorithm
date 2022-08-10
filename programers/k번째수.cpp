#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for(int i = 0; i < commands.size(); i++){
        int s = commands[i][0] - 1;
        int e = commands[i][1] - 1;
        int find = commands[i][2] - 1;
        vector<int> temp;
        for(int j = s; j<=e; j++){
            temp.push_back(array[j]);
        }
        
        sort(temp.begin(), temp.end());
        
        answer.push_back(temp[find]);
    }
    return answer;
}
