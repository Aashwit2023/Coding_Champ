class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>st;
    
        for(int i=0 ;i<n ; i++){
            if(s[i]=='(' || s[i]=='[' || s[i] =='{'){
                st.push(s[i]);
            }
            if(s[i] == ')'){
                if(st.empty() || st.top()!='('){
                    return false;
                }
                else if(st.top() == '('){
                    st.pop();
                }
            }
            if(s[i] == '}'){
                if(st.empty() || st.top()!='{'){
                    return false;
                }
                else if(st.top() == '{'){
                    st.pop();
                }
            }
            if(s[i] == ']'){
                if(st.empty() || st.top()!='['){
                    return false;
                }
                else if(st.top() == '['){
                    st.pop();
                }
            }
            // cout<<st.top()<<endl;
            
        }
        // for(int i=0 ;i<n ; i++){
        //     if(s[i] == ')'){
        //         if(st.empty() || st.top()!='('){
        //             return false;
        //         }
        //         else if(st.top() == '('){
        //             st.pop();
        //         }
        //     }
        //     if(s[i] == '}'){
        //         if(st.empty() || st.top()!='{'){
        //             return false;
        //         }
        //         else if(st.top() == '{'){
        //             st.pop();
        //         }
        //     }
        //     if(s[i] == ']'){
        //         if(st.empty() || st.top()!='['){
        //             return false;
        //         }
        //         else if(st.top() == '['){
        //             st.pop();
        //         }
        //     }
        // }
       return st.empty(); 
        
    }
};