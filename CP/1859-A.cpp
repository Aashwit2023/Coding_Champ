#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++) cin>>vec[i];
        vector<int> a, b;
        sort(vec.begin(), vec.end());
        bool flag = true;
        for(int i=0;i<n;i++){
            if(i < n-1 && vec[i] != vec[i+1]){
                flag = false;
            }
            while(i < n-1 && i < n && vec[i] == 1){
                if(vec[i] != vec[i+1]){
                    flag = false;
                }
                a.push_back(1);
                i++;
            }
        }
        if(flag){
            cout<<-1<<endl;
        }
        else if(!flag && a.empty()){
            int i = n-1;
            while(i >= 0 && vec[n-1] == vec[i]){
                b.push_back(vec[i]);
                i--;
            }
            while(i >= 0){
                a.push_back(vec[i]);
                i--;
            }
        }
        else{
            for(auto &it: vec){
                if(it != 1)b.push_back(it);
            }
        }
        if(!flag){
            cout<<a.size()<<" "<<b.size()<<endl;
            for(auto &it: a){
                cout<<it<<" ";
            }
            cout<<endl;
            for(auto &it: b){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
}