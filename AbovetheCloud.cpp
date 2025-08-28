// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while(t--){
// 		int n;cin>>n;
// 		string s;cin>>s;
// 		map<char,int>mp;
// 		for(int i=0;i<n;i++){
// 			mp[s[i]]++;
// 		}
// 		int count=0;
//         if(mp.size() == 1){
//             for(auto &it: mp){
//                 if(it.second >= 3){
//                     cout<<"Yes"<<endl;
//                 }else{
//                     cout<<"No"<<endl;
//                 }
//             }
//         } else if(mp.size() >= 2){
//             for(auto &it:mp){
//                 if(it.second>=2){
//                     count++;
//                 }
//             }    
//                 if(count>=2 ){
//                     cout<<"Yes"<<endl;
//                 }else if(count>=1 && mp.size() == 2){
//                     cout<<"Yes"<<endl;
//                 }else{
//                     cout<<"No"<<endl;
//                 }
//         } else{
//             cout<<"No"<<endl;
//         }
// 	}
//     return 0;
// }
#include<iostream>
#include<vector>
#include<set>
using namespace std;

int  main(){
    int t;
    cin>>t;

    while(t){
        int n;
        string s;
        cin>>n;
        cin>>s;
        set<char>st;
        set<char>st2;

        for(int i = 0;i<s.size()-1;i++){
            st.insert(s[i]);
        }

        for(int i = 1;i<s.size();i++){
            st2.insert(s[i]);
        }

        if( st.size() == 1 || s[n-2] == s[n-1] || st2.size() != s.size()-1 || st.size()!=s.size()-1){
            cout<<"Yes"<<endl;
        }
        
        else if(st.size() == s.size()-1 || st2.size() == s.size()-1){
            cout<<"No"<<endl;
        } else {
            cout<<"Yes"<<endl;
        }
        
        t--;
    }

    return 0;


}