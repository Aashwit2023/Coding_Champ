#include<iostream>
using namespace std;
int main(){
    int num,i,j,k;
    cin>>num;
    for(k=1;k<=num;k++){
        for(i=1;i<=num-k;i++){
            cout<<" ";
        }
        for(j=1;j<=k;j++){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}
