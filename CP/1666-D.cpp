#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        string s, x;
        cin >> s >> x;
        map<char, int> mp1, mp2;
        int p = x.size() - 1;
        for (int i = s.size() - 1; i >= 0; i--) {
            mp1[s[i]]++;
            if (s[i] == x[p]) {
                mp2[x[p]]++;
                if (mp1[s[i]] == mp2[x[p]]) {
                    p--;
                }
            }
        }
        if (p < 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
    }
}