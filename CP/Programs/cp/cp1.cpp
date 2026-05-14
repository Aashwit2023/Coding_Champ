#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  cout<<"Enter A : ";
  cin>>a;
  cout<<"Enter B : ";
  cin>>b;
  if(a==b){
  cout<<"1"<<endl;
  }
  else if((a+b)%2==0){
  cout<<"3"<<endl;
  }
  else{
  cout<<"2"<<endl;
  }
  return 0;
}