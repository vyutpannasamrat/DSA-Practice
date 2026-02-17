#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2){
    unordered_map<int,int> ng;
    stack<int> st;
    for(int x: nums2){
        while(!st.empty() && st.top()<x){ ng[st.top()] = x; st.pop(); }
        st.push(x);
    }
    while(!st.empty()){ ng[st.top()] = -1; st.pop(); }
    vector<int> res;
    for(int x: nums1) res.push_back(ng[x]);
    return res;
}
int main(){}
