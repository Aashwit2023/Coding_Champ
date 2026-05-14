#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=num;i>num-5;i--){
        for(int j=0;j<5;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}