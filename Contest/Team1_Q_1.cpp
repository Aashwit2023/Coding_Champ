#include<bits/stdc++.h>
using namespace std;
vector<int> func(vector<int>nums){
    
    vector<int>dupl;

    for(auto &it: nums){
        dupl.push_back(it);
    }
    for(auto &it: dupl){
        nums.push_back(it);
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }
    return nums;
}
int main(){
    vector<int>nums={3,58,466,4,8,51,5,58,1,1,5};
    func(nums);
}