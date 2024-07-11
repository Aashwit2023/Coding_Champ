class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // vector<int>::iterator it=nums.begin();
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     int r=nums[i];
        //     for(int j=i+1;j<n;j++){
        //         int s=nums[j];
        //         if(r==s){
        //             return true;
        //         }
        //     }
        // }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }return false;
        
    }
};