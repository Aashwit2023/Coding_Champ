#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    int i=0,j=n-1;
    long long sum1 = 0, sum2 = 0, ans = 0;
    while(i<=j){
        // sum1 += vec[i];
        // sum2 += vec[j];
        if(sum1 < sum2){
            // i++;
            sum1 +=vec[i++];
        }else if(sum2 < sum1){
            // j--;
            sum2 +=vec[j--];
        }else { // sum1 == sum2
            ans = sum1;  // record the current equal sum
            sum1 += vec[i++];
        }
    }
    // Check one last time after the loop
    if (sum1 == sum2) ans = sum1;
    cout<<ans<<endl;
}