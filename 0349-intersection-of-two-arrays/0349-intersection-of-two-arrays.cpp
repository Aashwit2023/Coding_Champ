class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        set<int>sp;
        vector<int>ans;
        int m=nums1.size();
        int n=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(), nums2.end());
        while(i<m && j<n){
            if(nums1[i]==nums2[j]){
                sp.insert(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
               j++;
            }
        }
        
        for(auto &it: sp){
            ans.push_back(it);
        }
        return ans;
    }
};