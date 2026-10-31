class Solution {
public:
    int m, n;
    int solve(vector<vector<int>> &grid, int i, int j, vector<vector<int>> &dp) {
        if (i >= m || j >= n || i < 0 || j < 0) return 0;
        if (grid[i][j] != 1 && i == m - 1 && j == n - 1)  return 1;
        if (dp[i][j] != -1) return dp[i][j];
        int ans = 0;
        if (grid[i][j] != 1) {
            int down = solve(grid, i + 1, j, dp);
            int right = solve(grid, i, j + 1, dp);
            ans = (down + right);
        }
        return dp[i][j] = ans;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return solve(grid, 0, 0, dp);
    }
};