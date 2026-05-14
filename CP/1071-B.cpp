#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<long long> vec(n);
        for (int i = 0; i < n; i++) cin>>vec[i];
        if (n == 1) cout<<0<<endl;
        else {
            long long ans = 0;
            for (int i = 0; i + 1 < n; i++) {
                ans += llabs(vec[i] - vec[i + 1]);
            }
            long long s = ans;
            for (int i = 0; i < n; i++) {
                long long cur = ans;
                if (i > 0) {
                    cur -= abs(vec[i] - vec[i - 1]);
                }
                if (i + 1 < n) {
                    cur -= abs(vec[i] - vec[i + 1]);
                }
                if (i > 0 && i + 1 < n){
                    cur += abs(vec[i - 1] -  vec[ i + 1]);
                }
                s = min(s, cur);
            }
            cout<<s<<endl;
        }
    }
}