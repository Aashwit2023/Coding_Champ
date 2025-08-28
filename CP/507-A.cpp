#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> vec(n), temp;
    for(int i=0;i<n;i++)cin>>vec[i];
    vector<pair<int, int>> mp;
    for(int i=0;i<n;i++){
        mp.push_back({vec[i], i});
    }
    sort(mp.begin(), mp.end());
    int sum = 0;
    for(int i=0;i<n;i++){
        int val = mp[i].first;
        int idx = mp[i].second;
        if(sum + val <= k){
            temp.push_back(idx + 1);
            sum += val;
        }
    }
    if(temp.size() == 0){
        cout<<0<<endl;
    }else{
        sort(temp.begin(),temp.end());
        cout<<temp.size()<<endl;
        for(auto &it: temp){
            cout<<it<<" ";
        }
    }
    return 0;
}