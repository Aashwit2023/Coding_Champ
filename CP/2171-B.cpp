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
        if (vec[0] == -1 && vec[n - 1] == -1) {
            vec[0] = 0;
            vec[n - 1] = 0;
        }
        else if (vec[0] == -1 && vec[n - 1] != -1) {
            vec[0] = vec[n - 1];
        }
        else if (vec[0] != -1 && vec[n - 1] == -1) {
            vec[n - 1] = vec[0];
        }
        for (auto &it : vec) {
            if (it == -1) it = 0;
        }
        long long res = abs(vec[n - 1] - vec[0]);

        cout<<res<<endl;
        for (auto &it: vec) {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}