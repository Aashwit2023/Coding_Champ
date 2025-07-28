#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec{1,2,3,4,5,6,7,8,9,10};
    unordered_map<int,int>mp;
    mp[0]=1;
    mp[1]=2;
    mp[3]=6;
    mp[2]=5;
    mp[5]=4;
    mp[4]=3;
    
        //cout<<it.first<<" "<<it.second<<endl;
        if(mp.find(99)!=mp.end()){
            cout<<"true "<<endl;
        }
        else{
            cout<<"False";
        }
    

    return 0;
}