class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count0=0;
        vector<int>temp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count0+=1;
            }
            else {
                temp.push_back(nums[i]);
            }
        }
        for(int j=0;j<count0;j++){
            temp.push_back(0);
        }
       nums=temp;
    }
};