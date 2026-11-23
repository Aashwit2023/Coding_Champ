class ProductOfNumbers {
public:
    vector<int>ans;
    ProductOfNumbers() {
        ans.push_back(1);
    }
    
    void add(int num) {
        // if(num == 0) vec.clear();
        if(num == 0){
            ans.clear();
            ans.push_back(1);
            return ;
        }
        else{
            ans.push_back(ans[ans.size()-1]*num);
        }
    }
    int getProduct(int k) {
        int n = ans.size();
        if(k > n-1) return 0;
        return ans[n-1]/ans[n-k-1];

        // int product = 1;
        // for(int i = 1; i<=k; i++ ){
        //     product *= vec[n-i];            
        // }
        // return product;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */