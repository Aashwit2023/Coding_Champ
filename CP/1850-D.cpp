#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, k;
        cin>>n>> k;
        vector<int> vec(n);
        for (int i = 0; i< n; i++) cin>>vec[i];
        if (n == 1) cout<<0<<endl;
        else {
            sort (vec.begin(), vec.end());
            int maxi = 0, cnt = 1;
            for (int i = 1; i < n; i++) {
                if ((vec[i] - vec[i - 1]) <= k) {
                    cnt++;
                } else cnt = 1;
                maxi = max(maxi, cnt);
            }
            cout<<n - maxi<<endl;
        }
    }
    return 0;
}