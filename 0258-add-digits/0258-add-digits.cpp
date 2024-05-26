class Solution {
public:
    int sum(int x){
        int ans=0;
        while(x!=0){
            int rem=x%10;
            ans+=rem;
            x/=10;
        }
        return ans;
    }
    int addDigits(int num) {
        while(num>9){
            int n=sum(num);
            num=n;
        }
        return num;
        
    }
};