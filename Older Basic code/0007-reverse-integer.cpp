class Solution {
public:
    int rev(int n){
        if(n<= INT_MIN || n>=INT_MAX-1){return 0;}
        int res=0;
        long long int temp=0;
        while(n){
            int rem=n%10;
            temp=temp*10+rem;
            if(temp<=INT_MIN || temp>=INT_MAX-1){return 0;}
            else{res=temp;}            
            n/=10;
        }
        return res;
    }
    int reverse(int x) {
        return rev(x);
        
    }
};