#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n; cin>>n;
        bool one = false;
        vector<int> vec(n);
        for (int i = 0 ; i < n; i++) {
            cin>>vec[i];
        }
        bool flag = true;

        vector<int> a = vec;
        sort(a.begin(), a.end());
        for (int i = 0; i < n / 2; i++) {
            if (a[i] != vec[i]) {
                if (i % 2 == 1 && a[i] != vec[(2 * i ) + 1]) {
                    flag = false;
                    break;
                } else if (i % 2 == 0 && a[i] != vec[(2 * (i + 1))]) {
                    flag = false;
                    break;
                }
            }
        }
        if (flag) {
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }
    }
}
