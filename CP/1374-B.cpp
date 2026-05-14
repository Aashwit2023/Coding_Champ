#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long n;
        cin>>n;
        long long num = n, cnt = 0;
        while (num != 1) {
            if (num % 6 == 0) {
                num /= 6;
                cnt++;
            } else if (num % 3 == 0) {
                num *= 2;
                cnt++;
            } else {
                cnt = -1;
                break;
            }
        }
        cout<<cnt<<endl;
    }
}