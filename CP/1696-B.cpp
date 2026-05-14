#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin>>vec[i];
        int l = 0, r = n - 1;
        while (l < n && vec[l] == 0) {l++;}
        while (r >= 0 && vec[r] == 0) {r--;}
        bool haszero = false;
        for (int i = l; i <= r; i++) {
            if (vec[i] == 0) {
                haszero = true;
                break;
            }
        }
        if (l > r) cout<<0<<endl;
        else if (haszero) cout<<2<<endl;
        else cout<<1<<endl;
    }
    return 0;
}