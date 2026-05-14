#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, maxi = 0;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        // if(vec.size()<= 2){
        //     for(int i=0;i<n;i++){
        //         if(vec[i] != i+1){
        //             vec[i] = i;
        //         }
        //     }
        // }
        // else if(vec.size() > 2){
            for(int i=0;i<n;i++){
                vec[i] = (n+1) - vec[i];
            }
        
        for(auto &it: vec){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}