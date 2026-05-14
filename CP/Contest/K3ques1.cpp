#include<bits/stdc++.h>
using namespace std;
void isPrime(unordered_set<int> &st,long long n,long long m){
    for(long long i=n; i*i<=m; i++) {
        if(n%i != 0) st.insert(i);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m, sum = 0;
        cin>>n >> m;
        unordered_set<int> st;
        isPrime(st,n, m);
        for(int i=n;i<=m;i++){
            if(st.find(i) != st.end()){
                sum += i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}