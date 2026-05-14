class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> sumleft,sumright;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            sumleft.push_back(sum);
        }
        sum=0;
        for(int i=nums.size()-1;i>=0;i--){
            sum+=nums[i];
            sumright.push_back(sum);
        }
        reverse(sumright.begin(),sumright.end());
        for(int i=0;i<nums.size();i++){
            if(sumright[i]==sumleft[i]){
                return i;
            }
        }
        return -1;
    }
};