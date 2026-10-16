class Solution {
public:
    bool isPossible(vector<int>& nums) {
        int n =  nums.size();
        unordered_map<int, int> mp, end;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (auto &it: nums) {
            pq.push(it);
            mp[it]++;
        }
        while (!pq.empty()) {
            int x = pq.top();
            pq.pop();
            if (mp[x] == 0) continue;
            mp[x]--;
            if (end[x - 1] > 0) {
                end[x - 1]--;
                end[x]++;
            } else if (mp[x + 1] > 0 && mp[x + 2] > 0) {
                mp[x + 1]--;
                mp[x + 2]--;
                end[x + 2]++;
            }else return false;
        }
        return true;
    }
};