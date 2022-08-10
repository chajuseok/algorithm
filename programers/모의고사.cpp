#include <string>
#include <vector>


using namespace std;

vector<int> solution(vector<int> answers) {
    // 1 12345
    // 2 21232425
    // 3 3311224455
    
    int s1[] = {1,2,3,4,5};
    int s2[] = {2,1,2,3,2,4,2,5};
    int s3[] = {3,3,1,1,2,2,4,4,5,5};
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
        
    vector<int> answer;
    
    int max_answer = 0;
    
    for(int i = 0; i<answers.size(); i++){
        int index = i % 5;
        if(answers[i] == s1[index]){
            n1++;
        }
    }
    for(int i = 0; i<answers.size(); i++){
        int index = i % 8;
        if(answers[i] == s2[index]){
            n2++;
        }
    }
    for(int i = 0; i<answers.size(); i++){
        int index = i % 10;
        if(answers[i] == s3[index]){
            n3++;
        }
    }
    
    max_answer = max(n1, max(n2, n3));
    if(n1 == max_answer){
        answer.push_back(1);
    }
    if(n2 == max_answer){
        answer.push_back(2);
    }
    if(n3 == max_answer){
        answer.push_back(3);
    }
    
    
    return answer;
}
