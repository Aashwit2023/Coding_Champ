class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for (auto &it: nums2) {
            nums1.push_back(it);
        }
        sort(nums1.begin(), nums1.end());
        int n = nums1.size();
        for (auto &it: nums1) cout << it <<" ";
        int mid = (n - 1)/ 2;
        if ((n % 2) == 1) {
            return nums1[mid];
        } 
        double ans = (double) nums1[mid] + nums1[mid + 1];
        return ans / 2.0;
    }
};