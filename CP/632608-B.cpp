#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long> vec(n);
    for(long long i=0;i<n;i++)cin>>vec[i];
    // unordered_map<long long, long long> mp;
    int oddnum = 0;
    for(auto &it: vec){
        if(it % 2 != 0){
            oddnum++;
        }
    }
    // long long sum = 0;
    // for(auto &it: mp){
    //     if(it.second == 1){
    //         sum += it.first;
    //     }else{
    //         sum += (it.first * it.second);
    //     }
    // }
    if(oddnum == 0){
        cout<<"Second"<<endl;
    }else{
        cout<<"First"<<endl;
    }
    return 0;
}