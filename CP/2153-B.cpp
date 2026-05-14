#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        long long a, b, c;
        cin>>a>>b>>c;
        if (((a & b) & ~c) == 0 && ((a & c) & ~b) == 0 && ((b & c) & ~a) == 0) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}