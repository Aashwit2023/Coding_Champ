class Solution {
public:
    bool isPalindrome(string s) 
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string str;
        for(int i=0; i<s.size();i++)
        {
            if(s[i]>=97 && s[i]<= 122 || s[i]>=48 && s[i]<=57)
            {
                str.push_back(s[i]);
            }
        }
        int i=0;
        int j=str.length()-1;
            while(i<=j)
            {
                if(str[i]!=str[j])
                {
                    return false;
                }
                i++;
                j--;
                
            }
        
     return true;   
    }
};