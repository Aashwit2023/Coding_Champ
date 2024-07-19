class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int m=nums1.size();
        int n=nums2.size();
        vector<int>ans1;
        vector<int>ans2;
        vector<vector<int>>answer;
        set<int>st1;
        set<int>st2;
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(auto &it:nums2){
            mp1[it]++;
        }
        for(auto &it:nums1){
            mp2[it]++;
        }
        for(; i<nums1.size();i++){
            if(mp1.find(nums1[i])==mp1.end()){
                st1.insert(nums1[i]);
            }
        }
        for(;j<nums2.size();j++){
            if(mp2.find(nums2[j])==mp2.end()){
                st2.insert(nums2[j]);
            }
        }
        // while(i<m && j<n){
        //     if(nums1[i]==nums2[j]){
        //         i++;
        //         j++;
        //     }
        //     if(nums1[i]<nums2[j]){
        //         st1.insert(nums1[i]);
        //         i++;
        //     }
        //      if(nums2[j]<nums1[i]){
        //         st2.insert(nums2[j]);
        //         //i++;
        //         j++;
        //     }            
        // }
        for(auto &it:st1){
            ans1.push_back(it);
        }
        for(auto &it:st2){
            ans2.push_back(it);
        }
        answer.push_back(ans1);
        answer.push_back(ans2);
      return answer;
    }
};