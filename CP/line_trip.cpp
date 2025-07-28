// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n, k;
//         cin>>n >> k;
//         vector<int> vec(n);
//         for(int i=0;i<n;i++){
//             cin>>vec[i];
//         }
//         int i = 0, j = 0, fuel = 0, cnt = 0;
//         while(j<n){
//             if(i == vec[n-1] && i < k){
//                 fuel = max((k - vec[j])*2, fuel);
//             }
//             if (i == vec[j]){
//                 j++;
//                 fuel = max(fuel, cnt);
//                 cnt = 0;
//             } else {
//                 cnt++ ;
//                 i++;
//             }
//         }
//         cout<<fuel<<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
 
    while(t){
        int n,x;
        cin>>n>>x; 
        vector<int>vec; 
        for(int i=0;i<n;i++){
            int gasPoints;
            cin>>gasPoints;
            vec.push_back(gasPoints);
        }
 
        int maxDist = 2* (x-vec[vec.size()-1]);
 
        if(vec.size() == 1){
            maxDist = max(maxDist, vec[0]);
        }
 
        for(int i=1;i<vec.size();i++){
          if((vec[i] - vec[i-1]) > maxDist){
            maxDist = vec[i] - vec[i-1];
          }
        }
        cout<<maxDist<<endl;
        t--;
    }
    return 0;
}