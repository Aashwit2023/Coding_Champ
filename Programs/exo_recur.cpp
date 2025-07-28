#include<iostream>
using namespace std;
int expo(int m, int n){
    if(m==0||n==0){
        return 1;
    }
    // else{
    //     return expo(m,n-1)*m;
    // }
    if(n%2!=0){
        return m*expo(m*m,n/2);
    }
    else{
        return expo(m*m,n/2);
    }
    
}
int main(){
    int m=2;
    int n=2;
    cout<<expo(m,n);
}