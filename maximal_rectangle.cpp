
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int> st;
        int ans = 0;
        h.push_back(0);
        for (int i = 0; i < (int)h.size(); i++) {
            while (!st.empty() && h[st.top()] > h[i]) {
                int height = h[st.top()];
                st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                ans = max(ans, height * width);
            }
            st.push(i);
        }
        return ans;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty()) return 0;
        int n = matrix[0].size();
        vector<int> h(n, 0);
        int ans = 0;
        for (auto &row : matrix) {
            for (int i = 0; i < n; i++) {
                if (row[i] == '1') h[i]++;
                else h[i] = 0;
            }
            ans = max(ans, largestRectangleArea(h));
        }
        return ans;
    }
};
