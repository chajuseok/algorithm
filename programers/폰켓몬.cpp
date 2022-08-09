#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int number = nums.size();
    set<int> s; 
    for(int i = 0; i<nums.size(); i++){
        s.insert(nums[i]);
    }
    int n = s.size();
    
    return min(number/2, n);
}
