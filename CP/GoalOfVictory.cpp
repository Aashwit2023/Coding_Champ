#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, sum = 0;
        cin>>n;
        vector<int> vec(n-1);
        for(int i=0;i<n-1;i++){
            cin>>vec[i];
            sum += vec[i];
        }
        cout<<-sum<<endl;
    }
    return 0;
}