#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while (t-- ) {
        long long n;
        cin>>n;
        long long mini, maxi;
        if (n % 2 != 0 || n < 4) {
            cout<<-1<<endl;
            continue;
        }
        long long four = 0, six = 0;
        long long num = n;
        while (num % 4 != 0 && six <= 1) {
            six++;
            num -= 6;
        }
        maxi = num / 4 + six;

        long long num2 = n;
        while (num2 % 6 != 0 && four <= 2) {
            four++;
            num2 -= 4;
        }
        mini = num2 / 6 + four;

        cout<<mini<<" "<<maxi<<endl;
        
    }
}