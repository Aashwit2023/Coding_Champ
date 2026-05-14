#include<iostream>
using namespace std;
int main(){
    int num;
    cout<< "Enetr a number : ";
    cin >> num;
    for(int i=0;i<=num;i++){
        if(i%2==0){
        int square=i*i;
        cout<<"Square of "<<i<<" is "<< square<<endl ;   
        }
    }
}