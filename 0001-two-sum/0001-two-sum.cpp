class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
       //  int n=nums.size();
       //  for(int i=0;i<n-1;i++){
       //      for(int j=i+1;j<n;j++){
       //          if(nums[i]+nums[j]==target){
       //              ans.push_back(i);
       //              ans.push_back(j);
       //              break;
       //          }
       //      }
       //  }
       // return ans; 
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            int diff=target-nums[i];
            auto it=mp.find(diff);
            if(it!=mp.end() && it->second!=i){
                 ans.push_back(i);
                 ans.push_back(it->second);
                break;
                //ans.push_back(nums[diff]);
            }
        }
        return ans;
    }
};