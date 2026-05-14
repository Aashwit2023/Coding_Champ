#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b;
        cin>>a>>b;
        if((a*b+1)% 2 == 0)cout<<(a*b+1)<<endl;
        else if(b % 2 == 0 && (a*(b/2) + 2) % 2 == 0) cout<<(a*(b/2) + 2)<<endl;
        else if(b % 3 == 0 && (a*(b/3) + 3) % 2 == 0) cout<<(a*(b/3) + 3)<<endl;
        else if(b % 5 == 0 && (a*(b/5) + 5) % 2 == 0) cout<<(a*(b/5) + 5)<<endl;
        else if(b % 7 == 0 && (a*(b/7) + 7) % 2 == 0) cout<<(a*(b/7) + 7)<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}