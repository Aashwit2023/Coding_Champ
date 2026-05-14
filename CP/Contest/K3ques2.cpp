#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n){
    if(n <= 1) return false;
    for(int i=2; i*i<=n; i++) {
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n >> s;
        map<char, int>mp;
        for(auto &it: s){
            mp[it]++;
        }
        vector<char> vec;
        for(auto &it: mp){
            if(isPrime(it.second)){
                vec.push_back(it.first);
            }
        }
        for(auto &it: vec){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}