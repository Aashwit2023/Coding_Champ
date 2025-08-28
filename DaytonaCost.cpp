#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        bool flag = false;
        cin>>n >>k;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(vec[i] == k){
                flag = true;
            }
        }
        cout<<(flag ? "YES" : "NO")<<endl;
        
    }
}