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
            if (vec[i]  % 67 == 0)  {
                one = true;
            }
        }
        if (one) {
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }
    }
}