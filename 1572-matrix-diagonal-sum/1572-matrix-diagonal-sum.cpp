class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s=0;
        for(int i=0;i<mat.size();i++){
            s=s+mat[i][i];
            if(mat.size()-i-1!=i){
                s=s+mat[mat.size()-1-i][i];
            }
        }

        return s;
    }
};