#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        vector<int> ans;
        ans.push_back(vec[0]);
        for(int i=1;i<n;i++){
            if(vec[i]-ans[ans.size()-1] > 1){
                ans.push_back(vec[i]);
            }
        }
        cout<<ans.size()<<endl;
    }
    return 0;
}