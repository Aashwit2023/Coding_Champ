#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,cnt = 0;
    cin>>n>>k;
    vector<int>vec;
    int r;
    for(int i=0;i<n;i++){
        cin>>r;
        vec.push_back(r);
    }
    for(int i = 0;i<n;i++){
        if(vec[i]!=0 && vec[k]<=vec[i]){
            cnt++;
        }
    }
    cout<<cnt;
}