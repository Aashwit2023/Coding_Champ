#include<bits/stdc++.h>
using namespace  std;
int main(){
    int n;
    cin>>n;
    string s, str;
    cin>>s;
    int i = 0, cnt = 1;
    while(i<n){
        str += s[i];
        i += cnt;
        cnt++;
    }
    cout<<str;
}