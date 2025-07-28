#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        bool flag = false;
        int i=1;
        while(i<vec.size()-1){
            if(vec[i-1] + vec[i] == vec[i] + vec[i+1]){
                i+=2;
                continue;
            }else{
                int diff = (vec[i] + vec[i+1]) - (vec[i-1] + vec[i]);
                if(vec[i-1] + diff + vec[i] == vec[i+1] + vec[i]){
                    // cout<<vec[i-1] + diff + vec[i]<<" "<<vec[i+1] + vec[i]<<endl;
                    i+=2;
                    continue;
                }else{
                    // cout<<"a"<<endl;
                    flag = true;
                    break;
                }
            }
        }
        cout<<(flag || i>=n ? "No" : "Yes")<<endl;
    }
    return 0;
}