class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int c1=0,c2=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                c1++;
            }
            else c1=0;
            if(c2<c1){
                c2=c1;
            }
        }
        return c2;
    }
};