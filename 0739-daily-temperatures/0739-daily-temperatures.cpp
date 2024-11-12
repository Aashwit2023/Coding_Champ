class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans;
        stack<int>st;
        int n=temperatures.size();
        for(int i=n-1; i>=0 ;i--){
            if(st.size() == 0){
                ans.push_back(0);
            }
            else if(temperatures[st.top()]>temperatures[i]){
                ans.push_back( st.top()-i);
            }
            else if(st.size()>0 && temperatures[ st.top()]<=temperatures[i]){
                while(st.size()>0 && temperatures[ st.top()]<=temperatures[i]){
                    st.pop();
                }
                if(st.size() == 0){
                    ans.push_back(0);
                }
                else if(temperatures[st.top()]>temperatures[i]){
                   ans.push_back( st.top()-i);
                }
            }
            st.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};