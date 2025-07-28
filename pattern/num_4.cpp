#include<iostream>
using namespace std;
int main() 
{ 
    int row,coloumn;
    cout<<"Enter a Row Print :" ;
    cin>>row;
    cout<<"Enter a column Print :" ;
    cin>>coloumn;
    for(int i=1;i<=row;i++){
         for(int j=1;j<=coloumn;j++) {
           cout<<j*j<<" "; 
        }
        cout<<endl;
    }
    return 0; 
}
//1 4 9 16 25 
//1 4 9 16 25 
//1 4 9 16 25 
//1 4 9 16 25 
//1 4 9 16 25 
