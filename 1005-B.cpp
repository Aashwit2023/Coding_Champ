#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cin>>s1>>s2;
    int size = s1.size() + s2.size();
    int cnt = 0, i = s1.size()-1, j = s2.size()-1;
    while(i>=0 && j >= 0){
        if(s1[i--] == s2[j--]){
            cnt += 2;
        } else{
            break;
        }
    }
    cout<<size - cnt<<endl;
}