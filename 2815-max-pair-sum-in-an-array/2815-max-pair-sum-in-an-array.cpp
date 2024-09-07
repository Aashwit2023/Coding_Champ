class Solution {
public:
    int largestnum(int nums){
        int ans=0;
        while(nums>0){
            int rem=nums%10;
            ans=max(rem,ans);
            nums/=10;            
        }
        return ans;
    }
    int maxSum(vector<int>& nums) {
        vector<int>maxdigits;
        for(int i=0;i<nums.size();i++){
            maxdigits.push_back(largestnum(nums[i]));
        }
        int maxsum=-1;
        for(int i=0;i<maxdigits.size();i++){
            int sum=0;
            for(int j=i+1;j<maxdigits.size();j++){
                if(maxdigits[i]==maxdigits[j]){
                    sum=nums[i]+nums[j];
                    maxsum=max(sum,maxsum);
                }
            }
            
        }
        return maxsum;
    }
};
    
    
    