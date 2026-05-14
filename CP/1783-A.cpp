#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, maxi = INT_MIN;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            maxi = max(maxi, vec[i]);
        }
        if(vec[0] == maxi){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            for(int i=1;i<n;i++){
                if(vec[i] == maxi){
                    swap(vec[0], vec[i]);
                    break;
                }
            }
            for(auto &it: vec){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
}