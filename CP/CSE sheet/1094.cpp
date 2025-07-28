#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];

    long long operations = 0;
    for(int i=1;i<n;i++){
        if(vec[i-1]>vec[i]){
            operations += (vec[i-1] - vec[i]);
            vec[i] = vec[i-1];
        }
    } 
    cout<<operations<<endl;
}