#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec{1,2,3,4,5,6,7,8,9,10};
    unordered_map<int,int>mp;
    // for(int i=0;i<vec.size();i++){
    //     //mp[i]=vec[i];
    //     mp[vec[i]]=i;
    // }
    // for(int i=0;i<mp.size();i++){
    //     cout<<mp[i]<<endl;
    // }
    mp[0]=1;
    mp[1]=2;
    mp[3]=6;
    mp[2]=5;
    mp[5]=4;
    mp[4]=3;
    for(auto &it:mp){
        //cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}