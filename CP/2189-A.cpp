#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        long long n, m, h;
        cin>>n >>m >> h;
        vector<int> vec(n);
        for (int i = 0; i < n; i++){
            cin>>vec[i];
        }
        int R = 0, C = 0, B = 0;
        for (auto &it: vec) {
            if (it <= m) R++;
            if (it <= h) C++;
            if (it <= min(m, h)) B++;
        }
        int row = R - B;
        int col = C - B;
        int p1 = min(row, col);
        int rem_pr = B - p1;
        int p2 = rem_pr / 2;
        cout<<p1 + p2<<endl;
    }
}