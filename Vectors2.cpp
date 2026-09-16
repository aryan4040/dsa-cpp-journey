#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum (vector<int> vec , int target) {
    vector<int> ans;
    int st = 0;
    int end = vec.size() - 1;
    int currSum = 0;
    while(st < end) {
        currSum = vec[st] + vec[end];
        if(currSum == target) {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        } else if(currSum > target) {
            end--;
        } else {
            st++;
        }
    }
    return ans;
}

int main() {
    vector<int>vec = {2 , 7 , 11 , 15};
    int target = 9;
    vector<int> answer = pairSum(vec , 9);
    cout<<answer[0]<<" , "<<answer[1]<<endl;
    return 0;
}
return 0;
