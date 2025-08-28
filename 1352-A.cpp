#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, cnt = 1;
        cin>>n;
        vector<int> vec;
        while(n){
            int rem = n % 10;
            if(rem != 0){
                vec.push_back(rem * cnt);
            }
            cnt *= 10;
            n /= 10;
        }
        cout<<vec.size()<<endl;
        for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}