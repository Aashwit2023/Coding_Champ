class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for (auto &it: nums){
            mp[it]++;
        }
        for(const auto &i:mp){
            if(i.second==1){
                return i.first;
            }
        }
        return -1;
//     int singleNumber(vector<int>& nums) {
//     // Create an unordered_map to store the count of each number
//     unordered_map<int, int> numCount;

//     // Iterate through the vector and populate the unordered_map
//     for (int num : nums) {
//         numCount[num]++;
//     }

//     // Find the number with a count of 1
//     for (const auto& pair : numCount) {
//         if (pair.second == 1) {
//             return pair.first;
//         }
//     }

//     // In case there is no single number (though the problem guarantees there is one)
//     return -1;
        
        
        
        
//          int singleNumber(vector<int>& nums) {
//         unordered_map<int,int>mp;
//         for (auto &it: nums){
//             mp[it]++;
//         }
//         for(auto &pair :mp){
//             if(pair.second==1){
//                 return pair.first;
//             }
            
//         }

    }
};