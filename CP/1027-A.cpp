#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int i = 0, j = n - 1;
        bool flag = true;
        while(i<j){
            if(s[i] == 'a' && s[j] =='a' || s[i] == 'z' && s[j] =='z'){
                i++;
                j--;
            }
            else if((s[i] == s[j]) || (s[i] + 1 == s[j] + 1) || (s[i] + 1 == s[j] - 1) || (s[i] - 1 == s[j] + 1)){
                i++;
                j--;
            }
            else{
                cout<<"NO"<<endl;
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
    }
}