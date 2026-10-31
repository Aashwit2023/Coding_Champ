class Solution {
public:
    int n, m;
    const long long MOD = 1e9 + 7;
    int solve(vector<vector<int>> &grid, vector<vector<vector<int>>> &dp, int dir, int i, int j) {
        if (i >= m || j >= n || j < 0 || i < 0) return 0;
        if (i == m - 1 && j == n - 1) {
            return 1;
        }
        int res = 0;
        if (dp[i][j][dir] != -1) {
            return dp[i][j][dir];
        }
        if (grid[i][j] == 1) {
            if (dir == 0) {
                res = solve(grid, dp, 1, i, j + 1);
            } else {
                res = solve(grid, dp, 0, i + 1, j);
            }
        } else {
            int down = solve(grid, dp, 0, i + 1, j);
            int right = solve(grid, dp, 1, i, j + 1);
            res = (down + right) % MOD;
        }
        return dp[i][j][dir] = res;
    }
    int uniquePaths(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int dir = 0;
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(2, -1)));
        return solve(grid, dp, dir, 0, 0);
    }
};