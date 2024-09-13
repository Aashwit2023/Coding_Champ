class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int m=INT_MAX;
        int n=INT_MIN;
          for(int i=0;i<nums.size();i++){
              m=min(nums[i],m);
              n=max(nums[i],n);
          }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=m && nums[i]!=n ){
                return nums[i];
            }
        }
        return -1;
    }
};