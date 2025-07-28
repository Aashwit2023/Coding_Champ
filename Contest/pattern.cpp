#include<iostream>
using namespace std;
int main(){
    int row=7;
    int col=6;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"* ";
        }
        cout<<endl;
        for(int k=0;k<col;k++){
            cout<<" ";
        }
        cout<<endl;
    }
}