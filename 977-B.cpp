#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    string s;
    cin>>s;
    map<string, int>mp;
    int i = 0, j = 0;
    string st ="";
    while(j < n){
        st += s[j];
        if (j-i+1 == 2) {
            mp[st]++;
            st.erase(st.begin());
            i++;
        }
        j++;
    }
    int maxi = 0;
    string str = "";
    for(auto &it: mp){
        if(it.second > maxi){
            maxi = it.second;
            str = it.first;
        }
    }
    for(auto c: str){
        cout<<c;
    }        

}