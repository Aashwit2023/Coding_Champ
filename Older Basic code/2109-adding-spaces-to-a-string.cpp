class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n=spaces.size();
        int m=s.size();
        string ans;
        int i=0,indi=0;
        while(i<m){
            if(indi<n && i==spaces[indi]){
                ans+=" ";
                ans+=s[i];
                i++;
                indi++;
            }
            else{
                ans+=s[i];
                i++;
            }
        }
        return ans;
    }
};