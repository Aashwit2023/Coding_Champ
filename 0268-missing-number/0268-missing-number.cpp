class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        int sumn=0;
        int suma=0;
        int n=nums.size();
        sumn=n*(n+1)/2;
        for(int i=0;i<n;i++){
            suma+=nums[i];
        }
        ans=sumn-suma;
        return ans;
    }
};