#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        unordered_map<char, int>mp;
        for(auto &it : s){
            mp[it]++;
        }
        bool flag =  false;
        for(int i=1;i<n-1;i++){
            char c = s[i];
            mp[c]--;
            if(mp[c] == 0){
                mp.erase(c);
            }
            if(mp.find(c)!= mp.end()){
                cout<<"Yes"<<endl;
                flag = true;
                break;
            }
        }
        if(!flag){
            cout<<"No"<<endl;
        }
    }
    return 0;
}