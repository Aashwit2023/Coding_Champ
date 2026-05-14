#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long n, x, y;
        cin>>n >> x >> y;
        vector<long long> vec(n);
        for (int i = 0; i < n; i++) cin>>vec[i];
        long long total_trans = 0;
        for (auto &it: vec) {
            total_trans += (it / x);
        }
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            long long posibl = total_trans - (vec[i] / x);
            long long final_anss = vec[i] + posibl * y;
            ans = max(ans, final_anss);
        }
        cout<<ans<<endl;
    }
    return 0;
}
