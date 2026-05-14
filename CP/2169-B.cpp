#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        int n = s.size();
        int cnt_star = 0, cnt_grt = 0, cnt_less = 0;
        bool  flag = true;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == '>') cnt_grt++;
            else if (s[i] == '<') cnt_less++;
            if (s[i] == '>' && s[i + 1] == '<') flag = false;
            if (i < n - 2 && s[i] == '>' && s[i + 1] == '*' && s[i + 2] == '<') flag = false;
            if (cnt_star > 1 || s[i] == '*' && s[i + 1] == '*') flag = false;
            if (s[i] == '*') cnt_star++;
            if (!flag) break;
        }
        if (!flag) {
            cout<<-1<<endl;
        } else {
            cout<<(cnt_star == 1 ? max(cnt_grt, cnt_less) + 1 : max(cnt_grt, cnt_less))<<endl;
        }
    }
}