#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> vec(n);
        for (int i = 0; i< n; i++) cin>>vec[i];
        unordered_set<int> st;
        for (auto &it : vec) {
            st.insert(it);
        }
        cout<<st.size()<<endl;
    }
    return 0;
}