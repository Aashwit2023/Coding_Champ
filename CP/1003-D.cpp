#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<int>vec(n);
    map<int, long long, greater<int>> mp;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        mp[vec[i]]++;
    }
    while(q--){
        long long org, cnt = 0;
        cin>>org;
        long long r = org;
        auto temp_mp = mp;
        for(auto &it: temp_mp){
            if( it.first <= r){
                long long use = min(it.second, r/it.first);
                r -= use * it.first;
                cnt+= use;
            }
            if(r == 0){break;}
        }
        if(r == 0){
            cout<<cnt<<endl;
        } else{
            cout<<-1<<endl;
        }
    }
    return 0;
}