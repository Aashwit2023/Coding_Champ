#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec ={1,5,6,8,66,45,89,25,4};
    int key=66;
    for(int i=0;i<vec.size();i++){
        if(vec[i]== key){
            cout<< i;
        }
    }
}