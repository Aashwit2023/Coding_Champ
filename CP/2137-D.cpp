#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];
        map<int, vector<int>> mp;
        for(int i=0;i<n;i++){
            mp[vec[i]].push_back(i);
        }
        bool flag = true;
        int num = 1;
        vector<int> ans(n, -1);
        for(auto &it: mp){
            int k = it.first;
            auto &it2 = it.second;
            if(it2.size() % k != 0){
                cout<<-1<<endl;
                flag = false;
                break;
            }
            for(int i=0;i<(int)it2.size();i+=k){
                for(int j=0;j<k;j++){
                    ans[it2[i+j]] = num;
                }
                num++;
            }
            // for(int i=0;i<(int)it2.size();i+=k){
            //     int r = 0;
            //     while(r != k){
            //         ans.push_back(num);
            //         r++;
            //     }
            //     num++;
            // }
        }
        if(flag){
            for(auto &it: ans){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}