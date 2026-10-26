class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        vector<int> peaks, valley;
        int n = nums.size();
        for (int i = 1; i < n - 1; i++) {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) peaks.push_back(nums[i]);
            else if   (nums[i] < nums[i - 1] && nums[i] < nums[i + 1]) valley.push_back(nums[i]);
        }
        int sum1 = 0, sum2 = 0;
        for (auto &it: peaks) sum1 += it;
        for (auto &it: valley) sum2 += it;
        return sum1 - sum2;
    }
};