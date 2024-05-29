class Solution {
public:
int solv(int x){
if(x<1|| x>=INT_MAX-1){return 0;}
long long int sum=0;
while(x!=1){
int rem=x%10;
int sqr=rem*rem;
if(sqr<1|| sqr>=INT_MAX-1){return 0;}
sum+=sqr;
x/=10;
}
return 1;
}
bool isHappy(int n) {
return solv(n);
}
};