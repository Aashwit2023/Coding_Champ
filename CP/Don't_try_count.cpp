#include<bits/stdc++.h>
using namespace std;
void doubles(string &s){
    s += s;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, op =0;
        cin>>n>>m;         
        string s1, s2;
        cin>>s1 >>s2;
        // while(s1.size()<= s2.size()){
        // }
        int i=0, j=0;
        int cnt = 1;
        while(i<=s2.size()){
            if(s1[i] == s2[j]){
            // cout<<cnt<<"  /";
                i++;
                j++;
                cnt++;
                if(cnt == s2.size()){break;}
            } else {
                // cout<<"kgdyg";
                cnt = 0;
                i++;
                j=0;
            }
            if(s1.size()<= s2.size()){
                // cout<<"g"<<endl;
                op++;
                doubles(s1);
            }
            }
        if(cnt == s2.size()){
            cout<<op<<endl;
        } else{
            cout<<-1<<endl;
        }
    }
}