#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k, maxi = INT_MIN;
        cin>>n>>k;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            maxi = max(vec[i], maxi);
        }
        sort(vec.begin(), vec.end());

        if(vec[k-1] == maxi){
            cout<<"Yes"<<endl;
            continue;
        }

        bool reached = false;
        for(int i=0;i<n;i++){
            if(vec[i] == maxi){
                int need = abs(vec[i]- vec[k-1]);
                if(need < vec[k-1]){
                    reached = true;
                    break;
                }
            }
        }
        if(reached) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }

    }
    return 0;
}