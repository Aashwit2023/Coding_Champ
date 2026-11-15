class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int mini = INT_MAX, an = nums[i];
            for (int j = i; j < n; j++) {
                an &= nums[j];
                mini = min(mini, nums[j]);
                if (mini == an) ans++;
            }
        }
        return ans;
    }
};