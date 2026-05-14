#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        string s;
        cin>>n>> s;
        int maxi_less = 0, maxi_greater = 0, cnt = 1;
        int i = 0;
        while (i < n) {
            if (s[i] == '<') cnt++;
            else cnt = 1;
            maxi_less = max(maxi_less, cnt);
            i++;
        }
        i = 0;
        cnt = 1;
        while (i < n) {
            if (s[i] == '>') cnt++;
            else cnt = 1;
            maxi_greater = max(maxi_greater, cnt);
            i++; 
        }
        cout<<max(maxi_less, maxi_greater)<<endl;
    }
    return 0;
}