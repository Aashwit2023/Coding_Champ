#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n == 1){
        cout<<1<<endl;
        return 0;
    }
    else if(n <= 3){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    else{
        int i = n;
        vector<int> vec;
        while(i>=1){
            if(i % 2 != 0){
                vec.push_back(i);
            }
            i--;
        }
        i = n;
        while(i>=2){
            if(i % 2 == 0){
                vec.push_back(i);
            }
            i--;;
        }

        for(auto it: vec){
            cout<<it<<" ";
        }
    }
}