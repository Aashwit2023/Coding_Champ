class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    int n=nums.size();
    sort(nums.begin(), nums.end());
    
    // Return the (k-1)th element
    return nums[n-k ];
      
    }
};