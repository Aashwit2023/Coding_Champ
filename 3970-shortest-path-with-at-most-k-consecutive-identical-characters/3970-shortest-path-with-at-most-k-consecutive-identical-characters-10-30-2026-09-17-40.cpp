class Solution {
public:
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        vector<vector<pair<int, int>>> adj(n);
        for (auto &it: edges) {
            adj[it[0]].push_back({it[1], it[2]});
        }
        const long long INF = 1e18;
        vector<vector<long long>> dist(n, vector<long long>(k + 1, INF));
        priority_queue< vector<long long>, vector<vector<long long>>, greater<vector<long long>>> pq;
        dist[0][1] = 0;
        pq.push({0, 0, 1});
        while (!pq.empty()) {
            auto it = pq.top();
            pq.pop();
            long long d = it[0];
            int u = it[1], cnt = it[2];
            if (d != dist[u][cnt]) continue;
            for (auto &i : adj[u]) {
                int v = i.first;
                int w = i.second;
                int newcnt =0;
                if (labels[v] == labels[u]) {
                    newcnt = cnt + 1;
                    if (newcnt > k) continue;
                    
                } else newcnt = 1;
                long long newDist = d + w;
                if (newDist < dist[v][newcnt]) {
                    dist[v][newcnt] = newDist;
                    pq.push({newDist, v, newcnt});
                }
            }
        }
        long long ans = INF;
        for (int i = 1; i <= k; i++) {
            ans =  min(ans, dist[n - 1][i]);
        }
        return ans == INF ? -1 :ans;
    }
};