#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
        vector<int> ans;
        int n = nums.size();
        int i=0;
        int j=n-1;

        while(i<j){
            int sums = nums[i] + nums[j];
            if(sums>target){
                j--;
            }
            else if(sums<target){
                i++;
            }
            else 
            return {i,j};
            }
        return {};

        }


int main() {
    vector<int> nums = {1, 3, 4, 5, 8, 9};
    int target = 6;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << " , " << ans[1] << endl;

    return 0;
}
