class Solution {
public:
    int maxi = 0;
    void solve(vector<string> &words, unordered_map<char, int> &freq, vector<int> &score, int i, int sum) {
        if (i == words.size()) {
            maxi = max(maxi, sum);
            return ;
        }
        solve(words, freq, score, i + 1, sum);
        vector<int> cnt(26, 0);
        int wordScore = 0;
        bool valid = true;
        for (auto &it: words[i]) {
            cnt[it - 'a']++;
            wordScore += score[it - 'a'];
            if (cnt[it - 'a'] > freq[it]) {
                valid = false;
            }
        }
        if (valid) {
            for (int j = 0; j < 26; j++) {
                freq['a' + j] -= cnt[j];
            }
            solve(words, freq, score, i + 1, sum + wordScore);
            for (int j = 0; j < 26; j++) {
                freq['a' + j] += cnt[j];
            }
        }
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        unordered_map<char, int> freq;
        for (auto &it: letters) {
            freq[it]++;
        }
        solve(words, freq, score, 0, 0);
        return maxi;
    }
};