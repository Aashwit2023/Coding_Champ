#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin>>vec[i];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i + 1; j < n; j++) {
            sum ^= vec[j];
            ans = max(sum, ans); 
        }
    }
    cout<<ans<<endl;
}