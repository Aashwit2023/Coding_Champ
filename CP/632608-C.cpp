#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
		long long ones=0,zeroes=0;
		vector<long long>vec(n);
		for(int i=0;i<n;i++){
			cin>>vec[i];
			if(vec[i]==0){
				zeroes++;
			}
			else{
				ones++;
			}
		}
		if(zeroes==ones){
			cout<<zeroes<<endl;
			for(int i=0;i<zeroes;i++){
				cout<<0<<" ";
			}
			cout<<endl;
		}
		else if(zeroes>ones){
			if(zeroes%2!=0){
				zeroes--;
			}
			cout<<zeroes<<endl;
			for(int i=0;i<zeroes;i++){
				cout<<0<<" ";
			}
			cout<<endl;
		}
		else{
			if(ones%2!=0){
				ones--;
			}
			cout<<ones<<endl;
			for(int i=0;i<ones;i++){
				cout<<1<<" ";
			}
			cout<<endl;
			
		}
		
	}
}