// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     float num;
//     string st="0";
//     cout<<"Enter any decimal digits : ";
//     cin>>num;
//     st=to_string(num);
//     // for(int i=st.size();i>0;i--){
//     //     if(st[i]==0){
//     //         st.erase(i);
//         // }
//         cout<<st<<endl;
//     //     return 0;
//     // }
//     return 0;
    
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
  float num;
  cin>> num;
  string s=to_string(num);
  int n=s.size();
  for(int i=n-1;i>n-4;i--){
    if(s[i]>'0'){
      break;
    }
    else if(s[i]=='0'){
      s.erase(i,1);
    }
  }
  num=stof(s);
  cout<<num;
  return 0;
}