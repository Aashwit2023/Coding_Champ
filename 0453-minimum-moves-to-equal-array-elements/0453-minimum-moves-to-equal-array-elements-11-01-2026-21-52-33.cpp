class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0;
        int mini = nums[0];
        for (auto &it: nums) {
            sum += it;
            mini = min(mini, it);
        }
        return sum - nums.size() * mini;
    }
};