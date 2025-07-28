#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, maxi = INT_MIN;
        cin>>n;
        vector<int> vec (n), ans;
        for(int i=0;i<n;i++) {
            cin>>vec[i];
            maxi = max(maxi, vec[i]);
        }
        int insertion_element = abs(maxi - (int)vec.size());
        int i = 1;
        ans.push_back(vec[0]);
        while(i<n){
            if(insertion_element != 0){
                for(int j=vec[i]-1;j>=2;j--){
                    if(vec[i]<= vec[i-1] && (int)ans.size()<2*n){
                        ans.push_back(j);
                        insertion_element--;
                    }
                }
            }
            i++;
            if(i<n)ans.push_back(vec[i]);
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}