#include<iostream>
using namespace std;
int fun(int n, int k){
    if(n==0){
        return 0;
        }
    else{
        return fun(n-1,k)+k;
        }
}
int main(){
    int x=3;
    static int k=5;
    cout<<fun(x,k);
}