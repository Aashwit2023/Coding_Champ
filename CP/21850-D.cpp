#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        long long n, m, h;
        cin>>n >>m >> h;
        vector<long long> vec(n);
        for (int i = 0; i < n; i++){
            cin>>vec[i];
        }
        int v = 0;
        vector<int> last(n, -1);
        vector<long long> cur(n);
        for (int i = 0; i < m; i++) {
            long long a,b;
            cin>>a >> b;
            
            int idx = a - 1;
            if (last[idx] != v) {
                cur[idx] = vec[idx];
                last[idx] = v;
            }
            cur[idx] += b;
            if (cur[idx] > h) {
                v++;
            }
        }
        for (int i = 0; i < n; i++) {
            if (last[i] != v) {
                cout<<vec[i]<<" ";
            } else {
                cout<<cur[i]<< " ";
            }
        }
        cout<<endl;
         
    }
}