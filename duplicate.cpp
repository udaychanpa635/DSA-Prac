#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

bool containDuplicate(vector<int>& nums){
    unordered_set<int> s;

    for(int x: nums){
        if(s.find(x) != s.end()){
            return true;
        }
        s.insert(x);
    }
    return false;
}

int main(){
    vector<int> nums = {3,1,4,5};
    cout<<containDuplicate(nums);
    return 0;
}
