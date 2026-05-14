#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long m, n;
        cin>>m>>n;
        long long power = 1;
        for(int i=0;i<m;i++){
            power = 1LL*power*2;
        }

        cout<< 1LL *power * n<<endl;
    }
}