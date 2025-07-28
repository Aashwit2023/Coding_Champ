#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec ={2,4,8,6,84,95,45,22,36,40};
    int key=220;
    sort(vec.begin(), vec.end());
    int start=0;
    int end =vec.size()-1;
    while(start <= end){
        int mid=((end-start)/2)+start;

        if(vec[mid]== key){
            cout<< vec[mid]<<" found";
        }
            else if(vec[mid]>key){
                end =mid -1;
            }
            else if(vec[mid]<key){
                start=mid+1;
            }
    }
    if(start>=end){
        cout<<"Not Found !";
    }    
}