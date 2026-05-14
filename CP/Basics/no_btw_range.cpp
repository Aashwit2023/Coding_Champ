#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number : ";
    cin>> num;
    for(int i=0;i<num;i++){
        // if(i>=101){
        //     cout<<i<<endl;
        // }
        cout<<i+101<<endl;
    }
    return 0;
}