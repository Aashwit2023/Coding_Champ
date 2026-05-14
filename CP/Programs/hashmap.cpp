#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec{1,2,3,4,5,6,7};
    unordered_map<int,int>mp;
    //Intertion of values in map
    // mp.insert({3,"Raj"});
    // mp.insert({1,"Ashu"});
    // cout<<mp[1]<<endl;
    // cout<<mp[3];
    for(int i=0;i<vec.size();i++){
        //mp[i]=vec[i];
        mp[vec[i]]=i;
    }
    for(int i=0;i<mp.size();i++){
        cout<<mp[i]<<endl;
    }

    return 0;
}