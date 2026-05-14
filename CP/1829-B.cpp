#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, zero = 0;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        for(int i=0;i<n;i++){
            int cnt = 0;
            while(i < n && vec[i] == 0){
                cnt++;
                i++; 
            }
            zero = max(zero, cnt);
        }
        cout<<zero<<endl;
    }
    return 0;
}