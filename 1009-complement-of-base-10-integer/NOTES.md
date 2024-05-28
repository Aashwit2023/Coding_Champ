class Solution {
public:
void convertBinary(int N) {
vector<int> ans;
int s=0;
​
while (N) {
int rem = N % 2;
ans.push_back(rem);
N = N / 2;
}
for (int i = ans.size() - 1; i >= 0; i--) {
s=(int)ans[i];
}
if(s!=0){
for (int i = ans.size() - 1; i >= 0; i--) {
int sum += s;
return sum;
}
}
}
int bitwiseComplement(int n) {
return convertBinary(n);
}
};