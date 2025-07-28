#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];
        int i = 0, cnt = 0, ans = 0;
        while(i<n){
            if(vec[i] == 0){
                i++;
                cnt++;
            }else if(vec[i] == 1){
                i++;
                cnt = 0;
            }
            if(cnt == k){
                i++;
                ans++;
                cnt = 0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}