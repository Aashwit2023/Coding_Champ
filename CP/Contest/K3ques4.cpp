#include<bits/stdc++.h>
using namespace std;
void solve(unoredered_map<vector<int>, int> mp){
    for(int i=1; i<=3; i++){
        for (int j=1; j<=3; j++) {
            for (int k=1; k<=3; k++) {
                vector<int> triplet = {i, j, k};
                int sum = i + j + k;
                mp[triplet] = sum;
            }
        }
    }
    return ;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(3*n);
        for(int i=0;i<(3*n);i++)cin>>vec[i];
        unordered_map<vector<int>, int>trip;
        solve(trip);
        unordered_map<int> mp;
        int sum = 0;
        for(auto &it: vec){
            mp[it]++;
            sum += it;
        }
        int find = sum / n;

    }
}