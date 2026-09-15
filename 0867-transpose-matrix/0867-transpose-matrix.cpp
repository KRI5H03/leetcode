class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& arr) {
        vector<vector<int>> x(arr[0].size(),vector<int>(arr.size(),0));
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[0].size();j++){
                x[j][i]=arr[i][j];
            }
        }
        return x;
    }
};