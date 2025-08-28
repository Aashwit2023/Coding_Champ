#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s, p;
        cin >> s >> p;
        int n = s.size();
        int m = p.size();
        int i = 0, j = 0;
        bool flag = true;

        while(i < n && j < m){
            if((s[i] == p[j]) && (j + 1 < m && s[i] == p[j + 1])){
                i++;
                j += 2;
            }
            else if(s[i] == p[j]){
                i++;
                j++;
            }
            else {
                flag = false;
                break;
            }
        }

        // Ensure both strings are fully processed
        if(i != n || j != m) flag = false;

        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
