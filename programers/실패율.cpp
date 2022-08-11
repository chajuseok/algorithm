#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    
    vector<pair<float, int>> v;
    for(int i = 1; i<=N; i++){
        int num = 0;
        float fail = 0;
        
        for(int j = 0; j<stages.size(); j++){
            
            if(stages[j] > i){
                num++;    
            }
            else if(stages[j] == i){
                num++;
                fail = fail +1;
            }
        }
        float f = fail/num;
        f = f * -1;
        v.push_back(make_pair(f, i));
        
    }
    sort(v.begin(), v.end());
    
    for(int i = 0; i< v.size(); i++){
        int index = v[i].second;
        answer.push_back(index);
    }
    
    
    return answer;
}
