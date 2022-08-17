#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    stack<int> st;
    st.push(arr[arr.size()-1]);
    for(int i =arr.size() -2 ; i>=0; i--){
        if(st.top() != arr[i]){
            st.push(arr[i]);
        }
    }

    while(!st.empty()){
        int temp = st.top();
        st.pop();
        answer.push_back(temp);
    }
    return answer;
}
