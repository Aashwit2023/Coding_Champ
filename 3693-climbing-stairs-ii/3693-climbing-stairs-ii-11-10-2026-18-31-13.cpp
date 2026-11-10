class Solution {
public:

    int solve(vector<int>& costs, int n, int j, vector<int> &dp){
        if (j == n) return 0;
        if (dp[j] != -1) return dp[j];

        int x = solve(costs, n, j + 1, dp)  + costs[j + 1] + 1;
        int y = INT_MAX;
        if (j + 2 <= n) {
            y =  solve(costs, n, j + 2, dp) + costs[j + 2] + 4;
        }
        int z = INT_MAX;
        if (j + 3 <= n) {
            z = solve(costs, n, j + 3, dp) + costs[j + 3] + 9;
        }
        return dp[j] = min(x, min(y, z));
    } 
    int climbStairs(int n, vector<int>& costs) {
        int j = 0;
        vector<int> dp(n+1, -1);
        vector<int> vec = {0};
        for (int i = 0; i < n ;i++) {
            vec.push_back(costs[i]);
        }
        // for (auto &it : vec) cout<<it<<" ";
        return solve(vec, n, 0, dp);
        
    }
};