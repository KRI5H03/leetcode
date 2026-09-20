class Solution {
public:
    int findGCD(vector<int>& arr) {
        int max=INT_MIN,min=INT_MAX;

        for(int i=0;i<arr.size();i++){
            if(min>arr[i])min=arr[i];
            if(max<arr[i])max=arr[i];
        }
        // return min;
        for(int i=max;i!=0;i--){
            if(max%i==0&&min%i==0)return i;
        }
        return 1;
    }
};