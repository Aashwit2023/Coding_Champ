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
        long long cnt = 0;
        bool  flag = true;
        for  (int i = n - 2; i >=0; i--) {
            while (vec[i] >= vec[i + 1] && vec[i] != 0) {
                vec[i] /= 2;
                cnt++;
            }
        }
        for (int i = 0; i < n - 1; i++) {
            if (vec[i] >= vec[i + 1]) {
                cout<<-1<<endl;
                flag = false;
                break;
            }
        }
        if (flag) cout<<cnt<<endl;
    }
}