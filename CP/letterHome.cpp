#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, s;
        cin>>n>>s;
        vector<int> vec(n);
        bool flag = true;
        for(int i=0;i<n;i++) {
            cin>>vec[i];
            if(s>vec[i]){
                flag = false;
            }
        }
        if(flag ){
            cout<<abs(vec[n-1] - s)<<endl;
        } else if(s > vec[n-1]){
            cout<<abs(vec[0]- s)<<endl;
        } else {
            int right_diff = vec[n-1] - s;
            int left_diff = s - vec[0];
            int diff_total = vec[n-1] - vec[0];
            if(right_diff < left_diff){
                cout<<right_diff+diff_total<<endl;
            } else{
                cout<<left_diff+diff_total<<endl;
            }
        }
    }
    return 0;
}