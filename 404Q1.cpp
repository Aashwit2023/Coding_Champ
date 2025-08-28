// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string S;
//     cin >> S;

//     vector<bool> present(26, false);
//     for (char ch : S) {
//         present[ch - 'a'] = true;
//     }

//     for (int i = 0; i < 26; ++i) {
//         if (!present[i]) {
//             char missingChar = 'a' + i;
//             cout << missingChar << endl;
//             return 0;
//         }
//     }
//     cout << "None" << endl;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;


int main(){
    string S;
    cin>> S;

    sort(S.begin(), S.end());
    int p = 0;
    for(int i=0;i<S.size();i++){
        cout<<S[i]<<" ";
    }
    for(char i = 'a';i<='z';i++){
        if(S[p]!=i){
            cout << i;
            break;
        }
        p++;
    }

    return 0;
}