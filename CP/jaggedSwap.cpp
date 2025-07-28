#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool flag = false;
        for(int i=1;i<n-1;i++){
            if(arr[i-1] > arr[i]){
                flag = false ;
                break;
            }
            if(arr[i-1] < arr[i] && arr[i] < arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
            if(arr[i-1] < arr[i] && arr[i] > arr[i+1]){
                i++;
                flag = true;
            }
        }
        if(arr[n-1] > arr[n-2]){
            flag = false;
        }
        if(flag == true){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}