#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int diff = n - (k-1);
        if(k > n){cout<<"No"<<endl;}
        else if(n % 2 != 0 && k % 2 != 0){
            cout<<"Yes"<<endl;
        }
        else if(n % 2 == 0 && k % 2 == 0) {
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
return 0;
}