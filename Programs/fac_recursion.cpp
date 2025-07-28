#include<iostream>
using namespace std;
int fun(int  x){
    if(x==0){
        return 1;
        }
    else
    {
        return fun(x-1)*x;
    }
    
}
int main(){
    int n=3;
    cout<<fun(n);
    return 0;
}