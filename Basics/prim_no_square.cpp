#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num ;
    cout<<"enter a number ";
    cin>> num;
    if(num<2){
        cout<<"this is not a prime";
        return 0;
    }

    if(num>2){
        for(int i=2;i<num;i++){
            if(num%i==0){
            cout<< num <<" is not a Prime Number"<<endl;
            return 0;
        }
        }
        cout<<num<<" is a prime number. "<<endl;
    }
    return 0;
}