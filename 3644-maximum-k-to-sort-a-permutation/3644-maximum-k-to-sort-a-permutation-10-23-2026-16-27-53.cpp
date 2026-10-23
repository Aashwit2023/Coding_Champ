class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        for(int i=0;i<n;i++){
            int ansi = nums[i] & i;
            if(ansi != i){
                temp.push_back(ansi);
            }
        }
        if(temp.size() > 0){
            int maxi = temp[0];
            for(int i=1;i<temp.size();i++){
                maxi = maxi & temp[i];
            }
            return maxi;
        }else {
            return 0;
        }
    }
};