#include<iostream>
using namespace std;
int fabo(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return fabo(n-1)+fabo(n-2);
    }
}
int main(){
    int n=5;
    cout<< fabo(n);
}