#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    // for( i=1;i<=num;i++){

    //     for( j=1;j<=i-1;j++){
    //         cout<<" ";
    //     }
    //     for(k=num-i;k>=1;k--){
    //         cout<<"*"<<"";
    //     }
    //     for(k=1;k<num-i;k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(i=num;i>=1;i--){
    //     for(j=1;j<=num-i;i++){
    //         cout<<" ";
    //     }
    //     for(k=1;k<=2*num-1;k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    for(int row=num;row>=1;row--)
    {
        for(int col=1;col<=num-row;col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=(2*row)-1;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}