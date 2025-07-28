#include<iostream>
using namespace std;
int main(){
    int value;
    cout<<"Enter a Value : ";
    cin>> value;
    if(value > 0 && value<=7 ){
         if (value==1){
            cout<<"Sunday";
        }
        else if (value==2){
            cout<<"Monday";
        }
         else if (value==3){
            cout<<"Tuesday";
        }
        else if (value==4){
            cout<<"Wednessday";
        }
         else if (value==5){
            cout<<"Thrusday";
        }
        else if (value==6){
            cout<<"Friday";
        }
         else if (value==7){
            cout<<"Saturday";
        }
    }
    else{
        cout<<"Enetr a  valid  number";
    }
}