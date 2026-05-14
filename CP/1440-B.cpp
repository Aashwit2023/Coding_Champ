#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, x;
        cin>>n >> x;
        vector<long long> vec(n * x);
        vector<long long> ans;
        while (x--) {
            long long mini = LLONG_MAX;
            for (int i = 0; i < n  ; i++ ) {
                cin>>vec[i];
                mini = min(mini, vec[i]);
            }
            ans.push_back(mini);
        }
        long long sum = 0;
        for (auto &it: ans) {
            sum += it;
        }
        cout<<sum<<endl;
    }
}