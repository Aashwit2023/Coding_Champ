#include<bits/stdc++.h>
using namespace std;
int s(long long n){
    long long cnt = 0;
    while(n){
        n /= 10;
        cnt++;
    }
    return cnt;
}
int main(){
    long long n;
    cin>>n;
    int size = s(n);
    long long cnt = 1, sum = 0, mini = INT_MAX, sze = 0;
    bool flag = false;
    while(n){
        long long rem = n % 10;
        long long mini = min(9-rem, rem);
        if(sze == size-1 && mini == 0){
            sum = sum + rem * cnt;
        }else{
            sum = sum + mini * cnt;
        }
        cnt *= 10;
        n /= 10;
        sze++;
    }
    if(sum == 0)cout<<9<<endl;
    else cout<<sum<<endl;
    return 0;
}