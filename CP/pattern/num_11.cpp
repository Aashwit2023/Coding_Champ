#include<iostream>
using namespace std;
int main(){
    int num,k,i,j;
    cin>>num;
    for(i=1;i<=num;i++){
        for(j=1;j<=num-i;j++){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}