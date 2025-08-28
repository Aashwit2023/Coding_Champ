#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        for (int i=0;i<4;i++){
            cin>>s[i];
        }
        int  num = stoi(s);
        int PerSqr = sqrt(num);
        if(PerSqr * PerSqr != num){
            cout<<-1<<endl;
        } else{
            cout<<0<<" "<<PerSqr<<endl;
        }
    }
    return 0;
}