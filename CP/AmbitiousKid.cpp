#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int min_val = INT_MAX;
    for(int i=0;i<n;i++){
        if(vec[i] == 0){
            min_val = 0;
            break;
        }
        min_val = min(min_val, abs(vec[i]));
    }
    cout<<min_val <<endl;
    // int pos_min = INT_MAX;
    // int neg_max = INT_MIN;
    // bool flag = false;
    // for(int i=0;i<n;i++){
    //     if(vec[i] > 0){
    //         pos_min = min (pos_min , vec[i]);
    //     } else if (vec[i] < 0) {
    //         neg_max = max(neg_max, vec[i]); 
    //     } else  {
    //         flag = true;
    //         break;
    //     }
    // }
    // if (pos_min != INT_MAX && neg_max != INT_MIN) {
    //     cout << min(pos_min, -neg_max) << endl;
    // } else if (pos_min != INT_MAX) {
    //     cout << pos_min << endl;
    // } else if (neg_max != INT_MIN) {
    //     cout << -neg_max << endl;
    // } else if (flag) {
    //     cout << 0 << endl;
    // }
    return 0;
}