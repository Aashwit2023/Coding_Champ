#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<int>vec(n);
    map<int, int, greater<int>> mp;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        mp[vec[i]]++;
    }
    while(q--){
        int org, div = 0, cnt = 0;
        cin>>org;
        int r = org, num = 0;
        auto temp_mp = mp;
        for(auto &it: temp_mp){
            if(it.second > 0 && it.first <= r){
                it.second--;
                r -= it.first;
                if(it.second == 0){temp_mp.erase(it.first);}
                cnt++;
                num += it.first;
            }
            if(r == 0){break;}
        }
        if(num == org){
            cout<<cnt<<endl;
        } else{
            cout<<-1<<endl;
        }
    }
    return 0;
}