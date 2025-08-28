#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k;
    cin>>n>>k;
    vector<vector<long long>> vec(n, vector<long long>(2));
    map<long long, int, greater<long long>> mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>vec[i][j];
        }
    }
    long long a = 0, b = 0;
    for(int i=0;i<n;i++){
        a += vec[i][0];
        b += vec[i][1];
        mp[(vec[i][0] - vec[i][1])]++;
    }
    if(b > k){
        cout<<"-1"<<endl;
    }
    else{
        long long diff = a - k, cnt = 0;
        while(diff > 0 && mp.size() != 0){
            auto it = mp.begin();
            diff -=  it->first;
            cnt++;
            it->second--;
            if(it->second == 0){
                mp.erase(it);
            }
        }
        cout<<cnt<<endl;
    }
}