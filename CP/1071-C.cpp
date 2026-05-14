#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<long long> vec(n);
        long long ele = LLONG_MAX;
        for (int i = 0; i < n; i++){
            cin>>vec[i];
            ele = min(ele, vec[i]);
        }
        sort (vec.begin(), vec.end());
            long long s = vec[1] - vec[0];
            ele = max(ele, s);
        cout<<ele<<endl;
        
    }
}