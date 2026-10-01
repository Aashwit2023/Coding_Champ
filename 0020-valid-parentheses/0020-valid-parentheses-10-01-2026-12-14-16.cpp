class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto &it: s) {
            if (st.empty()) {
                if (it == '}' || it == ')' || it == ']') return false;
                st.push(it);
            } else if (it == '{' || it == '(' || it == '[') {
                st.push(it);
            } else {
                if ((it == ')' && st.top() == '(') || (it == '}' && st.top() == '{') || (it == ']' && st.top() == '[')) st.pop();
                else return false;
            }
        }
        return st.empty();
    }
};