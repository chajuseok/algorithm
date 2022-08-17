#include <string>
#include <vector>

using namespace std;



int solution(vector<vector<int>> sizes) {
    
    vector<pair<int,int>> v;
    
    for(int i =0; i<sizes.size(); i++){
        int m = max(sizes[i][0], sizes[i][1]);
        int n = min(sizes[i][0], sizes[i][1]);
        v.push_back(make_pair(m, n));
    }
    
    int w = v[0].first;
    int h = v[0].second;
    for(int i =0; i<v.size(); i++){
        if(w <= v[i].first){
            w = v[i].first;
        }
        if(h <= v[i].second){
            h = v[i].second;
        }
    }
    
    int answer = h*w;
    return answer;
}
