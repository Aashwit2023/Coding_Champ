#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<pair<string,int>>s_string(n);
  for(int i=0 ;i<n ;i++){
  cin>>s_string[i].first>>s_string[i].second;
  }
  string m_string;
  cin>>m_string;
  
  int m_len =m_string.size();
  vector<int>dp(m_len+1,INT_MAX);
  dp[0]=0;
  for(int i=1 ;i<m_len ;i++){
  	for(const auto& sub : s_string){
    	string sub_str=sub.first;
      int cost=sub.second;
      int len =sub_str.length();
      
      if(i>=len && m_string.substr(i-len,len)==sub_str){
       if(dp[i-len]!=INT_MAX){
        dp[i]=min(dp[i],dp[i-len]+cost); 
       }
      }
    }
  }
  if(dp[m_len] == INT_MAX){
    cout<<"Impossible"<<endl;
  }else{
    cout<<dp[m_len]<<endl;
  }
  return 0;
}