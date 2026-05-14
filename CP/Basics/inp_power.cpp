#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,power,val;
    // cout<<"Enter a Number : "<<endl;
    cin>>num;
    // cout<<"Enter a Power : "<<endl;
    cin>>power;
    val=num;
    for(int i=1; i<power;i++){
        val=val*num;
       
    }
    cout<<val;
    return 0;
}