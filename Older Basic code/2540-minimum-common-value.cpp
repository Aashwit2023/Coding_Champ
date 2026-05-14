class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int m=nums1.size();
        int n=nums2.size();
        int ans=-1;
        vector<int>temp;
        // while(i<m && j<n){
        //     if(nums1[i]==nums2[j]){        
        //         //temp.push_back(nums1[i]);
        //         ans=nums1[i];
        //         break;
        //     }
        //     i++;
        //     if(nums2[j]==nums1[i]){      
        //         //temp.push_back(nums1[i]);
        //         ans=nums2[j];
        //         break;
        //     }
        //     j++;         
        // }
        unordered_map<int,int>mp2;
        for(auto &it: nums2){
            mp2[it]++;
        }
        for(;i<m;i++){
            if(mp2.find(nums1[i])!=mp2.end()){
                ans=nums1[i];
                break;
            }
        // return ans;
        }
    return ans;
    }
};