#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        long long n;
        cin>>n;
        vector<long long> vec(n);
        set<long long> st;
        for (int i = 0; i < n; i++){
            cin>>vec[i];
            st.insert(vec[i]);
        }
        vector<int> temp;
        for (auto &it: st) temp.push_back(it);
        int maxi = 0, cnt = 0;
        for (int i = 0; i < temp.size() - 1; i++) {
            if (temp[i + 1] == temp[i] + 1) {
                cnt++;
                maxi = max(maxi, cnt);
            }else {
                cnt = 0;
            }
        }
        cout<<maxi + 1<<endl;
        
    }
}