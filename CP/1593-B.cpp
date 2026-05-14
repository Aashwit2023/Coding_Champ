#include <bits/stdc++.h>
using namespace std;
int to_dlt(string s, string str) {
    int j = s.size() - 1;
    int cnt = 0;
    while (j >= 0 && s[j] != str[1]) {
        cnt++;
        j--;
    }
    if (j < 0) return INT_MAX;
    j--;
    while (j >= 0 && s[j] != str[0]) {
        cnt++;
        j--;
    }
    if (j < 0) return INT_MAX;
    return cnt;
}
int main() {
    int t;
    cin>>t;
    while (t-- ) {
        string s;
        cin>>s;
        cout<<min({to_dlt(s,"00"), to_dlt(s,"25"), to_dlt(s, "50"), to_dlt(s, "75")})<<endl;
    }
}