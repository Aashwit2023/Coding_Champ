#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n,k, x; cin >> n >> k >> x;
        vector<long long> vec(n);
        for (int i = 0;i < n; i++) {
            cin>>vec[i];
        }
        sort (vec.begin(), vec.end());
        vector<long long> mis;
        int r = 0;
        for (int i = 0; i <= x; i++) {
            if (r < n && vec[r] == i) {
                r++;
            } else {
                mis.push_back(i);
                if ((int)mis.size() == k) break;
            }
        }
        if ((int)mis.size() == 0) {
            for(auto &it: vec) cout<<it<<" "; 
        } else {
            for (auto &it: mis) cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
} 