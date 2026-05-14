class Solution {
public:
    int bitwiseComplement(int num) {
        if(num==0) return 1;
        // if(num==1) return 0;
        int ans=0;
        int mul = 1;
         while(num){
            int rem = num%2;
            rem = rem^1;
            ans = rem*mul + ans;
            mul = mul*2;
            num = num/2;
         }
         return ans;
    }
};
