#include<bits/stdc++.h>
using namespace std;
long long lcm(long long b, long long d) {
    return b / gcd(b,d) * d;
}
int main(){
    int t;
    cin>>t;
    while (t--) {
        long long a, b, c, d;
        cin>>a>>b>>c>>d;
        cout<<lcm(b,d)<<endl;
    }
    return 0;
}


0 1 1 -> 3
0 0 1 -> 1

0 1 0 -> 2
1 0 0 -> 4

1 1 0 -> 6
0 0 1 -> 1

1 1 1 -> 7
1 0 1 -> 5

0 1 0 -> 2 (final)

0 1 0 -> 2
1 1 0 -> 6

0 1 0 0 -> 4
1 0 0 1 -> 9

1 1 0 1 -> 13
0 0 1 0 -> 2 (final)

1 1 1 1 (ans) but its not an 0


0 0 0 1
0 1 0 1
1 0 0 1
0 0 1 0
0 1 0 0
0 1 1 0
0 0 0 1


