#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> vec;
        for(int i=0;i<n;i++){
            if(i % 2 == 0){
                vec.push_back(-1);
            }else if(i + 1 == n && n % 2 == 0){
                vec.push_back(2);
            }
            else{
                vec.push_back(3);
            }
        }
        for(int i=0;i<n;i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
}