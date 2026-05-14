#include <bits/stdc++.h>
using namespace std;

int gcdll(int a, int b) {
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long g = a[0];
        for (int i = 1; i < n; i++) g = gcdll(g, a[i]);
        long long x = -1;
        for (long long i = 2; i <= 100; i++) {
            if (__gcd(g, i) == 1) {
                x = i;
                break;
            }
        }

        if (x == -1) x = g + 1;
        cout << x <<endl;
    }
}
