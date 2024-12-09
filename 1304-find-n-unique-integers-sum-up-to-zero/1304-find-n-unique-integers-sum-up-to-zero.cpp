class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>vec;
        bool odd=true;
        if(n%2==0){
            odd=false;
        }
        if(odd==true){
            for(int i=1;i<=n/2;i++){
                vec.push_back(-i);
            }
            for(int i=0;i<=n/2;i++){
                vec.push_back(i);
            }
        }
        else{
            for(int i=1;i<=n/2;i++){
                vec.push_back(-i);
            }
            for(int i=1;i<=n/2;i++){
                vec.push_back(i);
            }
        }
        return vec;
    }
};