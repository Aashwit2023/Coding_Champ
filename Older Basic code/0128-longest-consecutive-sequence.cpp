class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
//         int count=0;
//         int n=nums.size();
//         sort(nums.begin(),nums.end());
        set<int>current_num;
        for(auto &it: nums){
            current_num.insert(it);
        }
//         for (auto  it=current_num.begin() ; it != current_num.end(); it++ ){
//             cout << " " << *it<<endl;
//         }
//         for(auto &it: current_num ){
//             int sum=0;
//             sum=it+1;
            
//             if(cur==sum){
//                 count++;
//             }
//             else{
//                 break;
//             }
            
//         }
//         // for(int i=0;i<n-1;i++){
//         //     if(nums[i]<current_num[i+1]){
//         //         count++;
//         //         // current_num +=1;
//         //     }
//         // }
//         return count;
         if (current_num.empty()) return 0;  // Edge case: If the set is empty, return 0

    int count = 1;  // At least one number is a consecutive sequence by itself
    int maxCount = 1;  // Track the maximum sequence length
    auto prev = *current_num.begin();  // Start with the first element in the set

    for (auto it = next(current_num.begin()); it != current_num.end(); ++it) {
        if (*it == prev + 1) {
            // If the current element is exactly 1 more than the previous one, it's consecutive
            count++;
            maxCount = max(maxCount, count);  // Update the max sequence length
        } else {
            // If it's not consecutive, reset the count
            count = 1;
        }
        prev = *it;  // Move to the next element
    }

    return maxCount;  // Return the longest consecutive sequence length
    }
};