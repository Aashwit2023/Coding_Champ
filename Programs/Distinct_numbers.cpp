#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums{2,5,9,9,5,-10,5,7,-45,-15,-5,10,6,8,7,5};
    unordered_map<int,int>distinct;
    for(int i=0;i<nums.size();i++){
        distinct[nums[i]]++;
    }
    cout<<distinct.size();
}