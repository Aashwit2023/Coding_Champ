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
        vector<int> temp(3);
        bool flag = false;
        for (int i = 0; i <= n - 3; i++) {
            for (int j = i + 1; j <= n - 2; j++) {
                for (int k = j + 1; k <= n - 1; k++) {
                    if (vec[i] < vec[j] && vec[j] > vec[k]) {
                        temp[0] = i + 1;
                        temp[1] = j + 1;
                        temp[2] = k + 1;
                        flag = true;
                        break;
                    }
                }
            }
        }
        if (flag) {
            cout<<"YES"<<endl;
            for (auto &it: temp) cout<<it<<" ";
        } else cout<<"NO";
        cout<<endl;
    }
}