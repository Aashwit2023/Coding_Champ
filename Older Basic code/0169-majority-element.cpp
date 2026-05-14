class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int  count=0;
        int n=nums.size();
        int max_num=-1;
        for(int i=0;i<n;i++){
            if(count==0){
                max_num=nums[i];                
            }
            if(nums[i]==max_num){
                count++;   
            }
            else{
                count--;
            }
        }
        return max_num;
    }
};
