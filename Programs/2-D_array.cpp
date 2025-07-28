// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int row,cols;
    cout<<"Enter a rows"<<endl;
    cin>>row;
    cout<<"Enter a cols"<<endl;
    cin>>cols;
    
    int arr[row][cols];
    cout<<"Enter a Elements in 2-D Array : "<<endl;
    
    for (int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<< "2-D matrix are : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}