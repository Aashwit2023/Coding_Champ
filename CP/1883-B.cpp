#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, k;
        string s;
        cin>>n>>k>>s;
        map<char, int> mp;
        for (auto &it: s) mp[it]++;
        int odd_cnt = 0;
        for (auto &it : mp) {
            if (it.second % 2 != 0) odd_cnt++;
        } 
        if (odd_cnt > k + 1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;    
    }
    return 0;
}