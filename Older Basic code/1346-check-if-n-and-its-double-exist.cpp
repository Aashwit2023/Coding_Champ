class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        // int maxi=0;
        for(int i=0;i<arr.size();i++){
            // maxi=max(maxi,arr[i]);
            for(int j=0;j<arr.size();j++){
                if(i!=j && arr[i]==2*arr[j]){
                    return true;
                }
            }
        } 
        return false;
    }
};