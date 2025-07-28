#include<iostream>
#include<string>
using namespace std;
int main(){
    string name1="Abhishek";
    string city1="Lucknow";
    string pan1="ABC12345";
    int dob1=19082001;
    int din1=12345;
    int cin1=891234;
    string NAME,CITY,PAN;
    int DOB,DIN,CIN;
    cout << "Enter a Name : ";
    cin >> NAME;
    cout <<"Enter a City : ";
    cin>>CITY;
    cout<<"Enter a PAN : ";
    cin >> PAN; 
    cout<<"Enter a DOB : ";
    cin>>DOB;
    cout<<"Enter a DIN : ";
    cin>>DIN;
    cout<<"Enter a CIN : ";
    cin>>CIN;
    if(pan1==PAN || din1==DIN || cin1==CIN ||dob1==DOB){
        cout<<"INVALID USERS";
        return 0;
      }
    else{
        cout<<"Valid User";
    }
    return 0;
}