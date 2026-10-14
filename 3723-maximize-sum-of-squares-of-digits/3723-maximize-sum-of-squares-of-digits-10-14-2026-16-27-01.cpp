class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        int nine = sum / 9;
        int rem = sum % 9;
        if (9 * num < sum) return "";
        string ans = "";
        for (int i = 0; i < nine; i++) {
            ans += '9';
        }
        if (rem > 0) ans += char ('0' + rem);
        while ((int)ans.size() < num) ans += '0';
        return ans;
    }
};