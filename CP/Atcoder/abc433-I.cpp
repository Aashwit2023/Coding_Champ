#include<bits/stdc++.h>
using namespace std;
int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if (z == 1) {
        cout<<(x == y ? "YES" : "NO")<<endl;
        return 0;
    } 
    if (x / y < z) {
        cout<<"NO"<<endl;
    } else {
        while (ceil(x / y) > z) {
            x++;
            y++;
        }
        if (x / y == z) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}