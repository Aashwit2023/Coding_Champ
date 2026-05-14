#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin>>vec[i];
    stack<int> st;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (st.empty()) {st.push(i); ans.push_back(-1);}
        else {
            while (!st.empty() && vec[st.top()] <= vec[i]) st.pop();
            if (st.empty()) {st.push(i); ans.push_back(-1);}
            if (!st.empty() && vec[st.top()] > vec[i]) {
                ans.push_back(st.top() + 1);
                st.push(i);
            }
        }
    }
    for (auto &it: ans) cout<<it<<endl;
    return 0;
}