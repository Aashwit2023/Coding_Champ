class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos =0;
        int neg=1;
        vector<int>vec(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                vec[pos]=nums[i];
                pos+=2;
            }
            else{
                vec[neg]=nums[i];
                neg+=2;
            }
        }return vec;
        
        // vector<int>pos(nums.size()/2);
        // vector<int>neg(nums.size()/2);
        // vector<int>ans(nums.size());
        // for(int i=0; i<nums.size() ; i++){
        //     if(nums[i]>0){
        //         pos.push_back(nums[i]);
        //     }
        //     else{
        //         neg.push_back(nums[i]);
        //     }
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(i%2 == 0){
        //         if(i!=0){
        //             i--;
        //         }
        //         ans.push_back(pos[i]);
        //         i++;
        //     }
        //     else{
        //         i--;
        //         ans.push_back(neg[i]);
        //         i++;
        //     }
        // }
        // return ans;
    }
};