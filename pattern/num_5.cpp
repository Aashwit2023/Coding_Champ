#include<iostream>
using namespace std;
int main(){
    int row,coloumn;
    cout<<"Enter a Row : ";
    cin>>row;
    cout<<"Enter a coloumn : ";
    cin>>coloumn;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=coloumn;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}