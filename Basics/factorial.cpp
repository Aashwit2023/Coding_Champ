#include<iostream>
using namespace std;
int main(){
    int num;
    // int val,facto;
    cout <<"Enter a Factorial Number : "<<endl;
    cin>>num;
    int sum=1;
    for(int i=1;i<=num;i++){
        // val=num-i;
        // facto=val*i;
        sum=sum*i;
        if(i<num){
            cout<<i<<" * ";
        }
        else if(i==num){
            cout<<i<<" = ";
        }
    }
    cout<<sum<<endl;
}