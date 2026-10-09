class Solution {
public:
    int minInsertions(string s) {
        int balance = 0;
        int ans = 0;
        for (auto &it: s) {
            if (it == '(') {
                if (balance % 2 != 0) {
                    ans++;
                    balance--;
                }
                balance +=2;
            } else {
                balance--;
                if (balance < 0) {
                    ans++;
                    balance = 1;
                }
            }
        }
        return abs(balance) + ans;
    }
};