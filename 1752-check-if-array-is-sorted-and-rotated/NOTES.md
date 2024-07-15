class Solution {
public:
bool check(vector<int>& nums) {
int count=0;
int n=nums.size()-1;
for(int i=0;i<n;i++){
if(nums[i]>nums[i+1]){
count +=1;
}
}
if(nums[n]>nums[0]){
count+=1;
}
if(count>1){
return 0;
}
return 1;
}
};