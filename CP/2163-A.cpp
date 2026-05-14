#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> vec(n);
        for (int  i = 0; i < n; i++) cin>>vec[i];
        sort(vec.begin(), vec.end());
        bool flag = true;
        for (int i = 1; i < n - 1; i+=2) {
            if (vec[i] != vec[i + 1]) {
                flag = false;
                break;
            }
        }
        if (flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
} 