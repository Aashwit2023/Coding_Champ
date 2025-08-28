#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int inc = n+1;
        int dec = n-1;
        bool flag = false;
        if(inc % 3 == 0){
            flag = true;
        } else if(dec % 3 == 0){
            flag = true;
        }
        if(flag == true){
            cout<<"First"<<endl;
        } else{
            cout<<"Second"<<endl;
        }
    }
    return 0;
}