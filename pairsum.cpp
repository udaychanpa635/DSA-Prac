#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();

    int i = 0, j = n - 1;

    while (i < j) {
        int sum = nums[i] + nums[j];

        if (sum > target) {
            j--;
        }
        else if (sum < target) {
            i++;
        }
        else {
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 3, 4, 5, 8, 9};
    int target = 6;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << " , " << ans[1] << endl;

    return 0;
}
