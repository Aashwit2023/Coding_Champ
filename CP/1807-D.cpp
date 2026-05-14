#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, q;
        cin>>n >>q;
        vector<int> vec(n + 1);
        for (int i = 1; i <= n; i++) cin>>vec[i];
        vector<int> pref(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + vec[i];
        }
        long long total_sum = pref[n];
        while (q--) {
            int l, r;
            long long k;
            cin>>l >>r >>k;

            //      IT GIVES TLE SO I OPTIMIZED THIS 
            
            // for (int i = 0; i < n; i++) {
            //     if (i + 1 >= l && i + 1 <= r) {
            //         sum += k;
            //     } else sum += vec[i];
            // }
            long long ans  = total_sum - (pref[r] - pref[l - 1]) + (r - l + 1) * k;
            if (ans % 2 != 0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}