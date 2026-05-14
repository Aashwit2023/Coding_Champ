#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number"<<endl;
    cin>> num;
    for(int i=0; i<=num;i++){
        int square=i*i;
        cout<<"Square of "<<i<<" is "<< square<<endl ;
    }
}