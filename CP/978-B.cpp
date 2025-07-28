#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = 0, num = 0;
    for(int i=0;i<n;i++){
        if(s[i] == 'x'){
            num++;
        }
        if(s[i] != 'x' || i == n-1){
            if(num>=3){
                cnt += num-2;
            }
            num = 0;
        }
    }
    cout<<cnt;
}