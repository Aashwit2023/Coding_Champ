#include<bits/stdc++.h>
using namespace std;
// bool pow(int n){
//     return (n > 0) && ((n & (n - 1)) == 0);
// }
int main(){
    int n, cnt = 0;
    cin>>n;
    vector<long long> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    // vector<bool> temp(n, false);
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         long long sum = vec[i]+vec[j];
    //         if(i != j && pow(sum) && (temp[i] == false || temp[j] == false)){
    //             temp[i] = true;
    //             temp[j] = true;
    //         }
    //     }
    // }
    // for(int i=0;i<temp.size();i++){
    //     if(temp[i] == false){
    //         cnt++;
    //     }
    // }
    // cout<<cnt<<endl;
    unordered_map<int,int> mp;
    for(auto &it :  vec){
        mp[it]++;
    }
    vector<int> pow;
    for(int i=0;i<= 32;i++){
        pow.push_back(1 << i);
    }
    for (auto &x : vec) {
        bool canPair = false;
        for (auto p : pow) {
            long long diff = p - x;
            if (mp.find(diff) != mp.end()) {
                if (diff != x || mp[x] > 1) { 
                    canPair = true;
                    break;
                }
            }
        }
        if (!canPair) cnt++;
    }
    cout<<cnt<<endl;
}