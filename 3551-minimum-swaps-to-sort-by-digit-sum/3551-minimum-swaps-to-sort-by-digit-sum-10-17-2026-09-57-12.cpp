class Solution {
public:
    int sum_digit (int n){
        int sum = 0;
        while(n){
            sum += n%10;
            n/=10;
        }
        return sum;
    }
    void solve(vector<pair<int, int>> vec, int &cnt){
        vector<pair<int, int>> temp = vec;
        map<pair<int, int>, int>mp;
        sort(temp.begin(), temp.end());
        for(int i=0;i<vec.size();i++){
            mp[temp[i]] = i; 
        }
        int i = 0;
        while(i<vec.size()){
            if(i != mp[vec[i]]){
                cnt++;
                    // sorted in map  , unsorted in vector
                swap(vec[mp[vec[i]]], vec[i]);
            } else {
                i++;
            }
        }  
    }
    // int equal(vector<int> nums , vector<int> vec, set<int> st, int cnt, int idx){
    //     for(int i=idx; i<nums.size()-1; i++){
    //         if((nums[i] > nums[i+1]) && (st.find(vec[i]) != st.end())) cnt++;
    //     }
    //     return cnt;
    // }
    int minSwaps(vector<int>& nums) {
        int n = nums.size(), cnt = 0;
        vector<pair<int, int>> vec;
        for(int i=0;i<n;i++){
            vec.push_back({sum_digit(nums[i]), nums[i]});
        }
        solve (vec, cnt);


        return cnt;
    }
};