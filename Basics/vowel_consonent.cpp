#include<iostream>
using namespace std;
int main(){
char alpha;
cout<< "Enter any Alphabhet : ";
cin>>alpha;
alpha=tolower(alpha);
if(alpha=='a'|| alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'){
    cout<<"This is a Vowel";
}
else{
    cout<<"This is a Consonent";
}
}