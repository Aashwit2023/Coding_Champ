#include<bits/stdc++.h>
using namespace std;
void mergesort(vector<int>vec,int start,int end){
    if(start<end){
        int mid=(start+end)/2;
        mergesort(vec,start,mid);
        mergesort(vec,mid+1,end);
        merge(vec,start,mid,end);
    }
}
void merge(vector<int>vec,int start int mid, int end){
    int N1 mid-start+1;
    int N2 =end-(mid+1);
    vector<int>left(N1);
    vector<int>right(N2);
    for(int i=0 ; i<N1 ; i++){
        left(i) =vec(start+1);
    }
    for(int i=0 ; i<N2 ; i++){
        right(i) =vec(start+1);
    }
}
int main(){

}