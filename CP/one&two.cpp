#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, cnt2 = 0;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(vec[i] == 2){
                cnt2++;
            }
        }
        int k = INT_MAX;
        int two = 0;
        for(int i=0;i<n;i++){
           if (vec[i] == 2) {
                two++;
            }
            if (two == cnt2 / 2 && cnt2 % 2 == 0) {
                k = min(i+1, k);
                break;
            }
        }
        if(cnt2 == 0){
            cout<<1<<endl;
        }else{
            cout<<(k!=INT_MAX ? k : -1)<<endl;
        }
        // int k = INT_MAX, sq = sqrt(mul);
        // if(sq * sq != mul){
        //     cout<<-1<<endl;
        //     continue;
        // }
        // long long int num = 1;
        // for(int i=0;i<n;i++){
        //     num *= vec[i];
        //     if(num == sq){
        //         k = min(k, i+1);
        //     }
        // }
        // cout<<(k!=INT_MAX ? k : -1)<<endl;
    }
}