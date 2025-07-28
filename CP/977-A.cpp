#include<bits/stdc++.h>
using namespace std;
int remove(int n){
    return n / 10;
}
int last(int n){
    return n % 10;
}
int main(){
    int n, k;
    cin>>n>>k;
    while(k != 0){
        int digit = last(n);
        if(digit == 0){
            n = remove(n);
            k--;
        }else {
            n -= 1;
            k--;
        }
    }
    cout<<n;
}