#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];

    int i = 0, j = n-1, cnt = 0;
    while(i<=j){
        if(vec[i] <= k){
            i++;
            cnt++;
        } else if(vec[j] <= k){
            j--;
            cnt++;
        } else {
            break;
        }
    }
    cout<<cnt;
    return 0;
}