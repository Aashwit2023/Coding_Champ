class Solution {
public:
    bool fun(vector<vector<int>>&mat,int targ){
         int row=mat.size();
        int col=mat[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==targ){
                    return true;
                }
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       return fun(matrix,target);
    }
};