class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        stack<int> st;
        int open = 0, maxi = 0;
        for (auto &it: s) {
            if (it == '(') {
                st.push('(');
                open++;
            } else if (it == ')') {
                st.pop();
                open--;
            }
            maxi = max(open, maxi);
        }
        return maxi;
    }
};