#include<bits/stdc++.h>
using namespace std;
bool pali(vector<int> vec){
    int i = 0, j = vec.size()-1;
    while(i<j){
        if(vec[i] == vec[j]){
            i++;
            j--;
        }else{
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];
        vector<int> temp;
        bool flag = false;
        unordered_map<int, int> mp;
        for(auto &it: vec){
            mp[it]++;
        }
        int i=0, j = 0;
        unordered_map<int, int> mp2 = mp;
        while(j < n){
            mp2[vec[j]]--;
            i++;
            if(mp2[vec[j]] == 0){
                mp2.erase(vec[j]);
            }
            if(i==2){
                if(mp2.find(vec[j-1]) != mp2.end()){
                    flag = true;
                    break;
                }
                i = 0;
                
                mp2[vec[j]]++;
                // mp2 = mp;
            }
            j++;
        }
        // for(int i=0;i<n;i++){
        //     temp.push_back(vec[i]);
        //     if(temp.size() >= 3){
        //         if(pali(temp)){
        //             flag = true;
        //             break;
        //         }
        //     }
        // }
        // temp.clear();
        // for(int i=n-1;i>=0;i--){
        //     temp.push_back(vec[i]);
        //     if(temp.size() >= 3){
        //         if(pali(temp)){
        //             flag = true;
        //             break;
        //         }
        //     }
        // }
        // int i = 0, j = 0, k = 0, r =0;
        // while(j < n){
        //     vector<int> temp2;
        //     temp.push_back(vec[j]);
        //     if(temp.size() >= 3){
        //         temp2 = temp;
        //         if(pali(temp)){
        //             flag = true;
        //             break;
        //         }
        //         k = temp2.size();
        //         r = 0;
        //     }
        //     while(r < k-1){
        //         temp2.erase(temp2.begin());
        //         if(temp2.size() >= 3){
        //             if(pali(temp2)){
        //                 flag = true;
        //                 break;
        //             }
        //         }
        //         r++;
        //     }
        //     j++;
        // }
        if(flag){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}