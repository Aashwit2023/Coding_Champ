#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int maxi = 1;
    for(int i=1;i<s.size();i++){
        int cnt = 1;
        while(s[i-1] == s[i]){
            cnt++;
            i++;
        }
        maxi = max(cnt, maxi);
    }
    cout<<maxi<<endl;
}