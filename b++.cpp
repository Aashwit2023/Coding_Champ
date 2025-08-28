// #include<bits/stdc++.h>
// using namespace std;
// // int print(int x){
// //     return x;
// // }
// int main(){
//     int t;
//     cin>>t;
//     int X=0;
    
//     string s;
//     while(t){
//         cin>>s;
//         if(s=="++X" || s=="X++"){
//             X=X+1;
//         }
//         else if(s=="--X" || s=="X--"){
//             X=X-1;
//         }
//         t--;
//     }
//     cout<<X;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t){
        int A,B,C;
        cin>>A;
        cin>>B;
        cin>>C;
        int avg=ceil((A+B)/2.0);
        if(avg>C){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
}
