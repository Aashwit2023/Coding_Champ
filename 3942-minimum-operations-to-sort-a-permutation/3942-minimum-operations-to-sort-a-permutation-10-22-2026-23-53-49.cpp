class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 0;
        int inc = 0, dec = 0, pos = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) inc++;
            if (nums[i] < nums[(i + 1) % n]) dec++;
            if (nums[i] == 0) pos = i;
        }
        int ans = INT_MAX;
        if (inc == 1) {
            ans  = min(ans, pos);
            ans = min(ans, n - pos + 2);
        }
        if (dec == 1) {
            ans = min(ans, pos + 2);
            ans = min(ans, n - pos);
        }
        return (ans == INT_MAX) ? -1 : ans;
    }
};