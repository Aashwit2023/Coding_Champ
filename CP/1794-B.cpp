#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, cnt = 1;
        cin>>n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin>>vec[i];
            if (vec[i] == 1) vec[i]++;
        }

        for (int i = 0; i < n - 1; i++) {
            if (vec[i + 1] % vec[i] == 0) {
                vec[i + 1] += 1;
            }
        }
        for (auto &it: vec) cout<<it<<" ";
        cout<<endl;
    }
}