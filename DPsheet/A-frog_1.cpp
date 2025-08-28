// #include<bits/stdc++.h>
// using namespace std;
// int n ;
// int solve(vector<int> vec, int i, vector<int> &dp){
//     if(i >= n-1) return 0;
//     if(dp[i] != -1){
//         return dp[i];
//     }
//     int x = INT_MAX;
//     if(i + 1 < n){
//         x = abs(vec[i] - vec[i+1]) + solve(vec, i+1, dp);  
//     }
//     int y = INT_MAX;
//     if(i + 2 < n){
//         y = abs(vec[i] - vec[i+2]) + solve(vec, i+2, dp);
//     }
//     return dp[i] = min(x, y);
// }
// int main(){
//     cin>>n;
//     vector<int> vec(n);
//     vector<int> dp(n, -1);
//     for(int i=0;i<n;i++)cin>>vec[i];
//     int i = 0;
//     cout<<solve(vec, i, dp);
// }
#include <bits/stdc++.h>
using namespace std;

int n;
int solve(vector<int>& vec, int i, vector<int>& dp) {
    if (i >= n - 1) return 0;
    if (dp[i] != -1) return dp[i];
    int x = INT_MAX;
    if (i + 1 < n) {
        x = abs(vec[i] - vec[i + 1]) + solve(vec, i + 1, dp);
    }
    int y = INT_MAX;
    if (i + 2 < n) {
        y = abs(vec[i] - vec[i + 2]) + solve(vec, i + 2, dp);
    }
    return dp[i] = min(x, y);
}
int main() {
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    vector<int> dp(n+1, -1);
    cout << solve(vec, 0, dp) << endl;
    return 0;
}
