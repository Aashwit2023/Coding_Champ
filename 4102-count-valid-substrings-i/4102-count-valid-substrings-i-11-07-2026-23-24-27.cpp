class Solution {
public:
    long long countValidSubstrings(string s) {
        long long ans = 0;
        int n = s.size();
        int i = 0, j = 0;
        while (j < n) {
            if (j - i + 1 >= 3 && s[j - 2] == 'a' && s[j - 1] == 'b' && s[j] == 'c') {
                i = j - 1;
            }
            ans += (j - i + 1);
            j++;
        }
        return ans;
        // for (int i = 0; i < s.size(); i++) {
        //     for (int j = i; j < s.size(); j++) {
        //         bool flag = true;
        //         for (int k = i; k + 2 <= j; k++) {
        //             if (s[k] == 'a' && s[k + 1] == 'b' && s[k + 2] == 'c') {
        //                 flag = false;
        //                 break;
        //             }
        //         }
        //         if (flag) ans++;
        //     } 
        // }
    }
};