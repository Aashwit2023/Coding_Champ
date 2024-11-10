class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int>ans;
        stack<int>st;
        
        for(int i = n-1 ; i>=0 ;i--){
            if(st.size() == 0){
                ans.push_back(prices[i]);
            }
            else if(st.top()<= prices[i]){
                ans.push_back(prices[i]-st.top());
            }
            else if(st.size()>0 && st.top()>prices[i]){
                while(st.size()>0 && st.top()>prices[i]){
                    st.pop();
                }
                if(st.size() == 0){
                    ans.push_back(prices[i]);
                }
                else if(st.top() <= prices[i]){
                    ans.push_back(prices[i]-st.top());
                }
            }
            st.push(prices[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
//         vector<int>answer;
//         int n = prices.size();
//         for(int i = 0 ; i<n-1 ; i++){
//             for(int j = i+1 ; j<n ; j++){
//                 if(prices[i] >= prices[j]){
//                     int sub = prices[i] - prices[j];
//                     answer.push_back(sub);
//                     break;
//                 }
//                 if(j==n-1 ){
//                     answer.push_back(prices[i]);
//                 }
//             }
//         }
//         answer.push_back(prices[n-1]);
//         return answer;        
        
    }
};