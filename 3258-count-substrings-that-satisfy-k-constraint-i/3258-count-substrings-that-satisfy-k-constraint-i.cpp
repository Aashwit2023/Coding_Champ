class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int count=0;
        for(int i=0;i<s.size();i++){
             int ones=0;
             int zeros=0;
            for(int j=i;j<s.size();j++){
                if(s[j]=='1'){
                    ones++;
                }  
                else{
                    zeros++;
                }
                if(ones<=k  || zeros<=k ){
                    count++;
                }
                
            }
        }
        return count;        
    }
};