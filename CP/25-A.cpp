#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    vector<int> vec(n);
    for (int i = 0; i< n; i ++) cin>>vec[i];

    int odd = 0, even = 0;

    for (auto &it: vec) {
        if (it % 2 == 0) even++;
        else odd++;
    }
    int ans = 0;
    // cout<<odd<<endl;
    if (odd == 1) {
        for (int i = 0; i < n; i++) {
            if (vec[i] % 2 != 0){ 
                ans = i + 1;
                break;
            }
        }
    } else {
        for (int i = 0; i < n; i++) {
            if (vec[i] % 2 == 0) {
                ans = i + 1;
                break;
            }
        }
    }
    cout<<ans<<endl;
}