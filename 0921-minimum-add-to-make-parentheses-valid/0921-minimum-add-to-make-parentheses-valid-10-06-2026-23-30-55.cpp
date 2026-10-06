class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        stack<int> st;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push('(');
            } else if (s[i] == ')') {
                if (st.empty()) {
                    count++;
                } else {
                    st.pop();
                }
            }
        }
        if (st.size() != 0) {
            count += st.size();
        }
        return count;
    }
};