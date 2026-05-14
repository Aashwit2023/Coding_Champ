#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, mini = INT_MAX;
        cin>>n;
        while(n){
            int rem = n%10;
            mini = min(rem, mini);
            n/= 10;
        }
        cout<<mini<<endl;
    }
    return 0;
}