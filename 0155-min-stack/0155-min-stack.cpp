class MinStack {
    vector<int>vec;
    vector<int>mini_vec;
    int topi;
    int size;
public:
    MinStack() {
        topi=-1; 
        size=0;
    }
    
    void push(int val) {
        if(topi==-1){
            topi=0;
            mini_vec.push_back(val);
            vec.push_back(val);
            size++;
        }
        else{
            topi++;
            vec.push_back(val);
            size++;    
        }
        if(val<=mini_vec.back()){
            mini_vec.push_back(vec[topi]);
        }  
    }
    
    void pop() {
        if(size == 0){
            return ;
        }
        topi--;
        if(vec.back()==mini_vec.back()){
            mini_vec.pop_back();
        }
        vec.pop_back();
        size--;
    }
    int top() {
        return vec.back();
    }
    
    int getMin() {
        return mini_vec.back();
       }
        
    
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */