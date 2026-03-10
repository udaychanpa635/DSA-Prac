#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);

        // prefix product
        result[0] = 1;
        for (int i = 1; i < n; i++) {
            result[i] = result[i - 1] * nums[i - 1];
        }

        // suffix product
        int right = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] = result[i] * right;
            right *= nums[i];
        }

        return result;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1,2,3,4};

    vector<int> ans = obj.productExceptSelf(nums);

    for(int x : ans) {
        cout << x << " ";
    }

    cout << endl;
}