class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int num;
        int count=0;
        
        for(int i=0;i<nums.size();i++){
            int digits=0;
            num=nums[i];
            while(num>0){
                digits++; 
                num/=10;
            }
                   
            if(digits % 2 == 0){
                count++;
            }
            
        }
    return count;
    }
};