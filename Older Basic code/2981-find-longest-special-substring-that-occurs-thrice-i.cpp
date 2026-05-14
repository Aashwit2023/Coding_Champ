class Solution {
public:
    bool special(string s){
        unordered_map<char,int>mp;
        int n=s.size();
        for(auto &it:s){
            mp[it]++;
        }
        if(mp.size()>1){
            return false;
        }
        return true;
    }
    int maximumLength(string s) {
        unordered_map<string,int>mp;
        for(int i=0;i<s.size();i++){
            string temp="";
            for(int j=i;j<s.size();j++){
                temp+=s[j];
                mp[temp]++;
            }
        }
        int maximumLength=-1;
        int length=0;
        for(auto &it:mp){
            if(special(it.first)){
                if(it.second>=3){
                    string current=it.first;
                    length=current.size();
                    maximumLength=max(length,maximumLength);
                }
            }
        }
        return maximumLength;
    }
};