class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // 
        int i=0;
        int j=0;
        int k=0;
        vector<int>temp(m+n);
        while(i<m&&j<n){
            if(nums1[i]<nums2[j])
            {
                temp[k++]=nums1[i++];
            }
            else{
                temp[k++]=nums2[j++];
            }
        }
        for(;i<m;i++){
            temp[k++]=nums1[i];
        }
        for(;j<n;j++){
            temp[k++]=nums2[j];
        }
        nums1=temp;
    }
};