#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, m, k;
        string a, b;
        cin>>n >> m >> k >> a >> b;
        int j = 0;
        for (int i = 0; i < n && j < m; i++) {
            if (a[i] == b[j]) j++;
        }

        if (j != m) {
            cout<<-1<<endl;
            continue;
        }
        
        int l = n - m;
        int num = (l + k - 1) / k;


        cout<<num<<endl;
    }
    return 0;
}
