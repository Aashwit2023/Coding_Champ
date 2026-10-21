class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        string srt = s;
        sort(srt.begin(), srt.end());
        if (srt == s) return 0;
        if (n == 2) return -1;
        char lst = srt.back();
        char slst = s.back();
        if (s[0] == srt[0] || s[n - 1] == lst) {
            return 1;
        }
        for (int i = 1; i < n - 1; i++) {
            if (s[i] == srt[0] || s[i] == lst) {
                return 2;
            }
        }
        return 3;
    }
};