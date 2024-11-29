class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        for(int i=0 ; i< n;i++){
            if(arr[i]>0){
                mp[arr[i]]=1;
            }
        }
        for (int i = 1; i <= n; i++) {
            if (mp.find(i) == mp.end()) {
                return i;
            }
        }
    return n+1;
        
    }
};