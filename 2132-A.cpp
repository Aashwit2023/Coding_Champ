#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        string s1, s2, S;
        cin>>n>>s1>>m>>s2>>S;
        for(int r=0;r<m;r++){
            if(S[r] == 'V'){
                s1 = s2[r] + s1 ;
            }else if(S[r] =='D'){
                s1 += s2[r];
            }
        }
        cout<<s1<<endl;
    }
}