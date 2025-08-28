#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>ans;
        long long pow = 10;
        vector<int> temp;
        for(int i=1;i<=18;i++){
            long long div = 1 + pow;
            if(div > n)break;
            if(n % div == 0){ans.push_back(n/div);}
            pow *= 10;
        }
        if(ans.size()==0){cout<<0<<endl;}
        else{
            cout<<ans.size()<<endl;
            sort(ans.begin(), ans.end());
            for(auto &it: ans){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
}