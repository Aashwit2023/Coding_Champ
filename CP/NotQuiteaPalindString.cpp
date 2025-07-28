// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         int n,k, zero = 0, One = 0;
//         cin>>n >>k;
//         for(int i=0;i<n;i++){
//             cin>>s[i];
//             if(s[i] == '0'){
//                 zero++;
//             } else{
//                 One++;
//             }
//         }
//         int totalPair = 2*k;
//         if(zero == 1 && One == 1 && k ==1){
//             cout<<"NO"<<endl;
//         }
//         else if(One >= k){
//             One = One - totalPair;
//             if(zero != 0 ){
//                 if(One % 2 == 0){
//                     cout<<"NO"<<endl;
//                 }else{
//                     cout<<"YES"<<endl;
//                 }
//             } else if(zero == 0) {
//                 if(One % 2 == 0){
//                     cout<<"NO"<<endl;
//                 } else{
//                     cout<<"YES"<<endl;
//                 }
//             }
//         } else if (zero >= k){
//             zero = zero - totalPair;
//             if(One != 0 ){
//                 if(zero % 2 == 0){
//                     cout<<"NO"<<endl;
//                 } else{
//                     cout<<"YES"<<endl;
//                 }
//             } else if(zero == 0) {
//                 if(zero % 2 == 0){
//                     cout<<"NO"<<endl;
//                 } else{
//                     cout<<"YES"<<endl;
//                 }
//             }
//         }
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		string s;cin>>s;
		int z=0,o=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='0'){
				z++;
			}
			else{
				o++;
			}
		}
		z/=2;
		o/=2;
		if((z==0 || o==0) && z+o!=k){
			cout<<"NO"<<endl;
		}
		else if(((z+o)%2==0 && k%2==0)|| ((z+o)%2!=0 && k%2!=0)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		
	}
}