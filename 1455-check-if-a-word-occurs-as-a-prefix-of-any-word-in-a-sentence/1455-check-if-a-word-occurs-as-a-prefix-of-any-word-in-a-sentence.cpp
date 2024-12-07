class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string>vec;
        string str;
        // int sw=0;
        int m=searchWord.size();
        int n=sentence.size() ;
        for(int i=0 ;i<n ;i++){
            if(sentence[i]!=' '){
                str+=sentence[i];
                if(i==n-1){
                    vec.push_back(str);
                    str.erase();
                }
            }
            else{
                vec.push_back(str);
                str.erase();
            }
        }
        for(int i=0;i<vec.size();i++){
            // cout<<vec[i]<<endl;
            string temp=vec[i];
            if(temp.size()>=m){
                int k=0;
                for(;k<m;k++){
                    if(temp[k]!=searchWord[k]){
                        break;
                    }
                }
                if(k==m){
                    return i+1;
                }
            }
        }
        
        // for(int i=0;i<vec.size();i++){
        //     for(int j=0;j<vec[i].size();j++){
        //         if(vec[i][j]==searchWord[sw]){
        //             if(vec[i][0]!=searchWord[sw]){
        //                 return -1;
        //             }
        //             else if(sw==m-1){
        //                 return i+1;
        //             }
        //             sw++;
        //         }
        //     }
        // }
        return -1;
    }
};