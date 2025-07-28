#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n;
    cout<<"Enter an size of string ";
    cin>>n;
    cout<<"Enter an String "<<endl;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    bool flag = false;
    int cnt = 0;
    if(n<3){
        cout<<"Invalid"<<endl;
        return 0;
    }
    if(s[n-1] == 'b' && s[n-2] == 'b' && s[n-3] == 'a'){
        cnt+=3;
    } 
    
    for(int i=0;i<n-3;i++){
        if(s[i] == 'a'){
            cnt++;
        } else if(s[i] == 'b'){
            cnt++;
        } else if(s[i] > 'a'+1){
            cout<<"Invalid"<<endl;
            return 0;
        }
    }
    if(cnt >= 3){
        cout<<"Valid"<<endl;
    } else{
        cout<<"Invalid"<<endl;
    }
    return 0;
}