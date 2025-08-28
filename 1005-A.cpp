#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(i > 0 &&vec[i] == 1){
            ans.push_back(vec[i-1]);
        }
        if(i == n-1){
            ans.push_back(vec[i]);
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}