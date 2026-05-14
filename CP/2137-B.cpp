#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];
        vector<int> ans;
        for(auto &it: vec){
            ans.push_back(abs(it-(n+1)));
        }
        for(auto &it: ans){
            cout<<it<<" ";
        }
        cout<<endl;

    }
}