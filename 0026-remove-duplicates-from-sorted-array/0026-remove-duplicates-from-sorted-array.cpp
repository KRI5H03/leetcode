class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int j=1;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]!=arr[i+1]){
                arr[j++]=arr[i+1];
            }
        }
        return j;
    }
};