#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long n, w;
        cin>>n >> w;
        long long rem = n % w;
        long long z = n / w;
        cout<<(z * (w - 1)) + rem<<endl;
    }
    return 0;
}
