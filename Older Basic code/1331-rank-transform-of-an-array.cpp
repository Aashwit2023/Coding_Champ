class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>ans;
        unordered_map<int,int>mp;
        set<int>temp;
        int count=1;
        // sort(temp.begin(),temp.end());
        for(auto &it :arr){
            temp.insert(it);
        }
        for(auto &it :temp){
            mp[it]=count;
            count++;
            // cout<<temp[i]<<" ";
        }
        // mp[temp[arr.size()-1]]=arr.size()-1;
        for(auto &it : arr){
            ans.push_back(mp[it]);
        }        
        return ans;
    }
};