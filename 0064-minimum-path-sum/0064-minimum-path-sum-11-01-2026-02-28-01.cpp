class Solution {
public:
    int m, n;
    int mini = INT_MAX;
    int solve(vector<vector<int>> &grid, int i, int j, vector<vector<int>> &dp) {
        if (i >= m || j >= n) return INT_MAX;
        if (i == m - 1 && j == n - 1) {
            return grid[i][j];
        }
        if (dp[i][j] != -1) return dp[i][j];
        
        int down = solve(grid, i + 1, j, dp);
        int right = solve(grid, i, j + 1, dp);
        return dp[i][j] = grid[i][j] + min(down, right);
    }
    int minPathSum(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return solve(grid, 0, 0, dp);
    }
};