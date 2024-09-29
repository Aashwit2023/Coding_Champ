class Solution {
public:
    char kthCharacter(int k) {
        
        string  word="a";
        while(word.length()<=k){
            string new_word="";
            for(char &ch : word){
                if(ch=='z'){
                    new_word +='a';
                }
                else{
                    new_word+=(ch+1);
                }
            }
            
            word+=new_word;
            
        }
        // cout<<word<<" ";
        return word[k-1];
    }
};