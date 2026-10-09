class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> &nums, int i, vector<int> &vec) {
        if (i == nums.size()) {
            ans.push_back({vec});
            return;
        }
        vec.push_back(nums[i]);
        solve(nums, i + 1, vec);
        vec.pop_back();
        solve(nums, i + 1, vec);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> vec;
        solve(nums, 0, vec);
        return ans;
    }
};