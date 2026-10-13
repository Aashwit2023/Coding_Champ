class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for(auto &it: nums) it = abs(it);
        sort(nums.begin(), nums.end());
        long long score = 0;
        long long j = n - 1, l = 0;
        for (int i = 0; i< n; i++) {
            long long val = 0;
            if (i % 2 == 0) {
                val = nums[j--];
                score += 1LL * val * val;
            } else {
                val = nums[l++];
                score -= 1LL * val * val;                
            }
        }
        return score;
    }
};