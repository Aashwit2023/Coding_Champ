#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, mini = INT_MAX, maxi = INT_MIN;
        cin>>n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin>>vec[i];
            if (i != n - 1) mini = min(mini, vec[i]);
            if (i != 0) maxi = max(maxi, vec[i]);
        }
        if (n == 1) {
            cout<<0<<endl;
            continue;
        }
        int maxi_num = max(vec[n - 1] - mini, maxi - vec[0]);
        for (int i = 0; i < n - 1; i++) {
            maxi_num = max(maxi_num, vec[i] - vec[i + 1]);
        }
        cout<<maxi_num<<endl;
    }
}