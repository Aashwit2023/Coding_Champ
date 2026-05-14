#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    int sum=0;
    for(int i=0;i<=num;i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
    return 0;
}