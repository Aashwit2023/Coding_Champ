class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // for (int i = 1; i <= nums.size(); i++) {
        //    for (int j = i; j <(nums.size()); j++) {
        //         if (nums[i] > nums[j]) {
        //             swap(nums[i], nums[j]);
        //         }
        //     }
        // }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }
        return false;        
    }
};