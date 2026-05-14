#include<iostream>
using namespace std;
int main(){
    int row,coloumn;
    char ch='0';
    cout<<"Enter a Row : ";
    cin>>row;
    cout<<"Enter a coloumn : ";
    cin>>coloumn;
    for(int i=0;i<row;i++){
        for(int j=0;j<coloumn;j++){
            cout<<ch;
            ch++;
        }
        
        cout<<endl;
    }
    return 0;

}