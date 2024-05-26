class Solution {
public:
int factor(int x){
if(x<=INT_MIN || x>=INT_MAX-1){return 0;}
if(x<=0)  return false;
int ques=0;
int divs=2;
int mul=1;
if(x>1){
ques=x/divs;
if(ques<=INT_MIN || ques>=INT_MAX-1){return 0;}
else{
if(ques<=6){
mul=divs*ques;
return mul;
}
else{return 0;}
}
}
return mul;
}
bool isUgly(int n) {
return factor(n);
}
};