#include<bits/stdc++.h>
using namespace std;
int solve(int i, int j){
    int cnt = 0;
    while(i<=j){
        i++;
        j--;
        cnt++;
    }
    return cnt ;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, cnt = 0;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(i > 0 && vec[i-1] > vec[i]){
                cnt++;
            }
        }
        if(cnt > 0){
            cout<<0<<endl;
        } else {
            int mini = INT_MAX;
            for(int i=0;i<n-1;i++){
                // mini = min(mini, solve(vec[i], vec[i+1]));
                int diff = ceil((int)(vec[i+1] - vec[i] + 1.0) / 2.0);
                mini = min(mini, diff);
            }
            cout<<mini<<endl;
        }        
    }
    return 0;
}