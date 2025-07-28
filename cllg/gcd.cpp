#include<bits/stdc++.h>
using namespace std;
int main(){
    // int a, b, gcd = 0;
    // cin>>a >>b;
    // for(int i = 1;i<min(a,b);i++){
    //     if(a%i == 0 && b%i ==0){
    //         gcd = i;
    //     }
    // }
    // cout<<gcd<<endl;
    int a, b;
    cin>>a >>b;
    int maxi = max(a, b);
    int mini = min(a, b);
    while(maxi % mini!=0){
        int temp =maxi;
        maxi = mini;
        maxi = temp;
    }
    cout<<maxi<<endl;
    return 0;

}