#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n >> s;
        // vector<char> vec;
        // for(auto &it: s){
        //     vec.push_back(it);
        // }
        bool flag = true;
        int sorted = 0;
        for(int i=0;i<n-1;i++){
            if(s[i] > s[i+1]){
                flag = false;
            }           
        }
        if(flag){
            cout<<0<<endl;
        }else{
            // long long inversions = 0, zeros = 0;
            for(int i=n-1;i>=0;i--){
                if(s[i] =='0'){
                    sorted++;
                } 
            }
            // cout<<sorted<<endl;
            if(sorted % 2 == 0){
                cout<<1<<endl;
            }else{
                cout<<2<<endl;
            }
        }
    }
}