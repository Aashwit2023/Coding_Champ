#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    unordered_set<int> seen;
    vector<int> result;

    for(int i = n - 1; i >= 0; i--) {
        if(seen.find(vec[i]) == seen.end()) {
            result.push_back(vec[i]);
            seen.insert(vec[i]);
        }
    }

    cout << result.size() << endl;
    reverse(result.begin(), result.end());
    for(auto x : result) cout << x << " ";
}