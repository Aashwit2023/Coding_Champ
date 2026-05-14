class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>st;
        for(auto &it:nums){
            st.insert(it);
        }
        nums.clear();
        for(auto &it:st){
            nums.push_back(it);
        }
        if(nums.size()<3){
            int maxi=nums[0];
            for(int i=1;i<nums.size();i++){
                maxi=max(maxi,nums[i]);
            }return maxi;
        }
    return nums[nums.size()-3];
    }
};