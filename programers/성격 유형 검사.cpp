#include <string>
#include <vector>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    
    int r = 0,t = 0,c = 0,f = 0,j = 0,m = 0,a = 0,n = 0;
    string answer = "";
    
    for(int i =0; i<survey.size(); i++){
      
        if(survey[i] == "RT"){
            if(choices[i] > 4){
                t += choices[i] - 4;
            } 
            else if(choices[i] < 4){
                r += 4 - choices[i];
            }
        }
        
        if(survey[i] == "TR"){
            
            if(choices[i] > 4){
                r += choices[i] - 4;
            } 
            else if(choices[i] < 4){
                t += 4 - choices[i];
            }   
            
        }
        if(survey[i] == "CF"){
                 
            if(choices[i] > 4){
                f += choices[i] - 4;
            } 
            else if(choices[i] < 4){
                c += 4 - choices[i];
            }   
            
            
        }
        if(survey[i] == "FC"){
                 
            if(choices[i] > 4){
                c += choices[i] - 4;
            } 
            else if(choices[i] < 4){
                f += 4 - choices[i];
            }   
            
        }
        if(survey[i] == "JM"){
                 
            if(choices[i] > 4){
                m += choices[i] - 4;
            } 
            else if(choices[i] < 4){
                j += 4 - choices[i];
            }   
            
        }
        if(survey[i] == "MJ"){
                 
            if(choices[i] > 4){
                j += choices[i] - 4;
            } 
            else if(choices[i] < 4){
                m += 4 - choices[i];
            }   
            
        }
        if(survey[i] == "NA"){
                 
            if(choices[i] > 4){
                a += choices[i] - 4;
            } 
            else if(choices[i] < 4){
                n += 4 - choices[i];
            }   
            
        }
        if(survey[i] == "AN"){
                 
            if(choices[i] > 4){
                n += choices[i] - 4;
            } 
            else if(choices[i] < 4){
                a += 4 - choices[i];
            }   
        }
        
    }
    
    if(r >= t){
        answer += "R";
    }
    else{
        answer += "T";
    }
    if(c >= f){
        answer += "C";
    }
    else{
        answer += "F";
    }
    if(j >= m){
        answer += "J";
    }
    else{
        answer += "M";
    }
    if(a >= n){
        answer += "A";
    }
    else{
        answer += "N";
    }
    return answer;
}
