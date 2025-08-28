#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int sol=0;

    while(t){
        int count_sol=0;
        // sol=0;
        for(int i=0;i<3;i++){
            int n;
            cin>>n;
            if(n==1){
                count_sol++;
            }
        }
        if(count_sol>=2){
                sol++;
            }
        t--;
    }
    cout<<sol;
    return 0;
}