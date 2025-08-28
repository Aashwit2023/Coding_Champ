#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n >> k;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];

    // int i=0, j=0;
    long double ans = 0.0, div = 0.0;
    for(int i=0;i<n;i++){
        long double sum = 0;
        for(int j=i;j<n;j++){
            sum += vec[j];
            div = sum/(j-i+1);
            if(j-i+1 >= k && ans < div){
                ans = div;
            }
        }
    }
    
    // while(j<n){
    //     sum += vec[j];
    //     div = (sum / (j-i+1));
    //     while(j-i+1 >= k && ans < div){
    //         div = (sum / (j-i+1));
    //         ans = div;
    //         sum -= vec[i];
    //         i++;
    //     }
    //     j++;
    // }   
    cout<<fixed << setprecision(15) <<ans<<endl;
    return 0;
}