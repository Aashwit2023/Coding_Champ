#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    unordered_map<int, int> freq;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        freq[a[i]]++;
    }

    int max_freq = 0;
    for (auto& entry : freq) {
        max_freq = max(max_freq, entry.second);
    }

    cout << max_freq << endl;

    return 0;
}
