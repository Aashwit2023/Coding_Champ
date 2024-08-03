class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
         vector<int>x;
    vector<int>y;
    vector<int>ans;
    for(int i=0;i<n;i++){
        x.push_back(nums[i]);
    }
    for(int i=n;i<nums.size();i++){
        y.push_back(nums[i]);
    }
    for(int j=0;j<x.size();j++){
        ans.push_back(x[j]);
        ans.push_back(y[j]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return ans;
        
    }
};