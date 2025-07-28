#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,x, i = 0, cnt = 0;
    cin>>a>>b>>x;
    string s= "";
    if(a>=b){
        s += '0';
        a--;
    }else{
        s += '1';
        b--;
    }
    while(a>0 && b>0 && cnt < x-1){
        if(s[s.size()-1] != '0'){
            s += '0';
            a--;
        } else if(s[s.size()-1] != '1'){
            s += '1';
            b--;
        }
        cnt++;
    }
    if(s.back() == '1'){
        for(int i=0;i<b;i++){
            s += '1';
        }
        for(int i=0;i<a;i++){
            s += '0';
        }
    }else if(s.back() =='0'){
        for(int i=0;i<a;i++){
            s += '0';
        }for(int i=0;i<b;i++){
            s += '1';
        }
    }
    
    cout<<s;
}