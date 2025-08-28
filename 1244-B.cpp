#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string vec;
        cin>>n>>vec;
        int lft = -1, rht = -1;
        for(int i=0;i<n;i++){
            if(vec[i] == '1') {
                if(lft == -1){lft  = i + 1;}
                rht = i + 1;
                // cnt = (n - (i+1) + 1) * 2;
            }
            // maxi = max(cnt, maxi);
        }
        if(lft == -1){
            cout<<n<<endl;
        }else{
            cout<<max((n - lft + 1)*2, 2 * rht)<<endl;
        }
    }
    return 0;
}