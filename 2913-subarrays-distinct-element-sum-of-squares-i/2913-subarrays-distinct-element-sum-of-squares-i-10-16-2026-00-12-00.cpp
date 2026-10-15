class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int k = i; k < n; k++) {
                set<int> st;
                for (int j = i; j <= k; j++) {
                    st.insert(nums[j]);
                } 
                int cnt = (int) st.size();
                count += cnt * cnt;
            }
        }
        return count;
    }
};