#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M;
    vector<vector<int>> friendships(N);
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        friendships[u].push_back(v);
        friendships[v].push_back(u);
    }
    cin >> K;

    vector<bool> current_status(N, true);
    int rostering_value = N, days = 1;

    while (rostering_value < K) {
        vector<bool> next_status(N);
        int daily_count = 0;
        for (int i = 0; i < N; i++) {
            int friend_count = 0;
            for (int friend_id : friendships[i]) {
                if (current_status[friend_id]) friend_count++;
            }
            if (current_status[i] && friend_count == 3) next_status[i] = true;
            else if (!current_status[i] && friend_count < 3) next_status[i] = true;
            if (next_status[i]) daily_count++;
        }
        rostering_value += daily_count;
        current_status = next_status;
        days++;
    }

    cout << days << endl;
    return 0;
}
