class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int m = arr.size();
        vector<int> l(m), r(m);
        stack<int> s;
        for (int i = 0; i < m; i++) {
            while (!s.empty() && arr[s.top()] >= arr[i])
                s.pop();
            l[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }
        s = stack<int>();
        for (int i = m - 1; i >= 0; i--) {
            while (!s.empty() && arr[s.top()] >= arr[i])
                s.pop();
            r[i] = s.empty() ? m : s.top();
            s.push(i);
        }
        int maxarea = 0;
        for (int i = 0; i < m; i++) {
            int w = r[i] - l[i] - 1;
            maxarea = max(maxarea, arr[i] * w);
        }
        return maxarea;
    }
};