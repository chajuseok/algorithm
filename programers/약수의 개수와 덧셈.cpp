#include <string>
#include <vector>


using namespace std;

bool func(int n){
    for(int i =1; i*i <=n; i++){
        if(i*i == n){
            return false;
        }
    }
    return true;
}

int solution(int left, int right) {
    int answer = 0;
    
    for(int i = left; i<= right; i++){
        if(func(i)){
            answer += i;
        }
        else{
            answer -= i;
        }
    }
    return answer;
}
