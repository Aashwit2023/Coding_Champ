class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        vector<int>answer;
        int n = prices.size();
        for(int i = 0 ; i<n-1 ; i++){
            for(int j = i+1 ; j<n ; j++){
                if(prices[i] >= prices[j]){
                    int sub = prices[i] - prices[j];
                    answer.push_back(sub);
                    break;
                }
                
                if(j==n-1 ){
                    answer.push_back(prices[i]);
                }
            }
        }
        answer.push_back(prices[n-1]);
        return answer;        
    }
};