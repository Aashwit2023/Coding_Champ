#include <bits/stdc++.h> 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];
        int one = 0, negone = 0;
        for(auto &it: vec){
            if(it == -1){negone++;}
            else if(it == 1){one++;}
        }
        // cout<<diff<<" ";
        if(negone > one){
            int diff = ceil((negone - one)/ 2.0);
            int newdiff = negone - diff;
            if(newdiff % 2 == 0)cout<<diff<<endl;
            else cout<<diff+1<<endl;
        }else{
            if(negone % 2 == 0)cout<<0<<endl;
            if(negone % 2 != 0)cout<<1<<endl;
        }
    }
}