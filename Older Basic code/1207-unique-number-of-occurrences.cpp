class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
//         unordered_map<int,int>mp;
//         sort(mp.begin(),mp.end());
        vector<int>ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            int count=0;
            while(i+1<arr.size()&&arr[i]==arr[i+1]){
                count++;
                i++;
            }
            ans.push_back(count); 
        }
        sort(ans.begin(),ans.end());
        for(int i=1;i<ans.size();i++){
            if(ans[i]==ans[i-1]){
                return false;
            }
        }
     return true;
    }
};