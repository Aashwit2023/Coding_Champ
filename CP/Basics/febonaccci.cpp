#include<iostream>
using namespace std;
int main(){
        int num ,current;
        cout <<"Enter a Limit : ";
        cin>>num;
        int last =0;
        int previous = 1;
        cout<<"febbonacci series : "<<endl;
        cout<<last<<endl;
        cout<<previous<<endl;
        for(int i=0;i<num-2;i++){
            current=last+previous;
            last=previous;
            previous=current;
            cout<<current<<endl;
        }
    return 0;
}