class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1){return 1;}
        if(n<0)  return false;
        int  res=2;
        for(int i=1;i<=31;i++){
            if(res==n){
                return 1;
            }
            res=res<<1;
        }
        return 0;
    }
};