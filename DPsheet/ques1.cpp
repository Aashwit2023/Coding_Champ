#include<bits/stdc++.h>
using namespace std;
int solve(int n, vector<int>&vec, vector<int> &dp){
    if(n <= 0){
        return dp[n] = 0;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    int x = abs(vec[n] - vec[n-1]) + solve(n-1, vec, dp);
    int y = INT_MAX;
    if(n-1 >= 1){
        y = abs(vec[n]-vec[n-2]) + solve(n-2, vec, dp);
    }
    return dp[n] = min(x,y);
}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    vector<int> dp(n+1 , -1);
    for(int i=0;i<n;i++)cin>>vec[i];
    cout<<solve(n-1, vec, dp);

     
}