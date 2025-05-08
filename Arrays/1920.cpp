#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans = nums; // Copy of nums, so we can safely overwrite
        for (int i = 0; i < nums.size(); i++) {
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 2, 1, 5, 3, 4};

    vector<int> result = sol.buildArray(nums);

    // Print the result
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
