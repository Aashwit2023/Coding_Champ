#include <iostream>
using namespace std;

int main() {
   int num, sum = 0, rem;
   cout<<"Enter a Three digit integer: ";
   cin>>num;

   for(int temp=num; temp!=0;temp/=10){
      rem = temp % 10;
      sum = sum +(rem * rem * rem);
      
   }

   if(sum == num)
      cout<<num<<" is an Armstrong number.";
   else
      cout<<num<<" is not an Armstrong number.";

   return 0;
}