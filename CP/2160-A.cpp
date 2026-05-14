#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> vec(n);
        for (int i = 0; i < n ; i++) cin>>vec[i];
        set<int>st;
        for(auto &it: vec){
            st.insert(it);
        }

        int ans = 0;
        for (auto &it:st){
            if(ans!=it){
                break;
            }
            ans++;
        }

        cout<<ans<<endl;
    }
    return 0;
}