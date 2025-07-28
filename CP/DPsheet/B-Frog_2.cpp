#include<bits/stdc++.h>
using namespace std;
int n;
int solve(vector<int> &vec, int i, int k,int &sum, vector<int> &dp){
    if(i >= n-1) return 0;
    if(dp[i] != -1){
        return dp[i];
    }
    int mini = INT_MAX;
    for(int r=i+1;r <= k+i && r < n;r++){
        int sum = abs(vec[i] - vec[r]) + solve(vec, r, k, sum, dp);
        mini = min(sum, mini);
    }
    return dp[i] = mini;
}
int main(){
    int k, sum = 0;
    cin>>n>>k;
    vector<int>vec(n);
    vector<int> dp(n+1, -1);
    for(int i=0;i<n;i++){cin>>vec[i];}
    cout<<solve(vec, 0, k, sum, dp);
    return 0;
}