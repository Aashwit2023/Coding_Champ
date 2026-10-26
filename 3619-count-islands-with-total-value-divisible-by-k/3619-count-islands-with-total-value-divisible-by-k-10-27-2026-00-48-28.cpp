class Solution {
public:
    int m, n;
    void bfs(vector<vector<int>> &grid, vector<vector<int>>  &vis, long long &ans, queue<pair<int, int>> &q) {
        while (!q.empty()) {
            auto it = q.front();
            q.pop();
            int i = it.first, j = it.second;
            int row[] = {0, 0, 1, -1};
            int col[] = {1, -1, 0, 0};
            for (int k = 0; k < 4; k++) {
                int nr = i + row[k];
                int nc = j + col[k];
                if (nr < 0 || nc < 0 || nr >= m || nc >= n) continue;
                if (!vis[nr][nc] && grid[nr][nc] != 0) {
                    vis[nr][nc] = 1;
                    ans += (grid[nr][nc] * 1LL);
                    q.push({nr, nc});
                }
            }

        }
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        m = grid.size();
        n = grid[0].size();
        vector<vector<int>> visited(m, vector<int> (n, 0));
        int ans = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!visited[i][j] && grid[i][j] != 0) {
                    long long sum = 0;
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    visited[i][j] = 1;
                    sum += grid[i][j];
                    bfs(grid, visited, sum, q);

                    if (sum % k == 0) ans++;
                }
            }
        }
        return ans;    
    }
};