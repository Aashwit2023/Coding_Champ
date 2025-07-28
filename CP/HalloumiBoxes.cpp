#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n >> k;
        vector<int> vec (n);
        for (int i = 0; i < n; ++i) {
            cin >> vec[i];
        }
        int cnt = 0;
        for(int i=1;i<n;i++){
            if(vec[i] < vec[i-1]){
                cnt++;
                break;
            }
        }
        if(cnt == 0){
            cout<<"YES"<<endl;
        } else {
            if(k == 1){
                cout<<"NO"<<endl;
            } else if (k > 1){
                cout<<"YES"<<endl;
            }
        }
    }
}