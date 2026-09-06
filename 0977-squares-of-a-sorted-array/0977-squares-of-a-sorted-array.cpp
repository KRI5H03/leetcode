class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        vector<int> x(arr.size());

        int i = arr.size() - 1, s = 0, e = arr.size() - 1;
        while (s <= e) {
            int s2 = arr[s] * arr[s];
            int e2 = arr[e] * arr[e];
            if (s2 >= e2) {
                x[i--] = s2;
                s++;
            } else {
                e--;
                x[i--] = e2;
            }
        }

        return x;
    }
};