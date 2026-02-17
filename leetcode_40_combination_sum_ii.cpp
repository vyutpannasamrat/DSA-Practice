#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> res;
void dfs(vector<int>& a, int t, int i, vector<int>& cur){
    if(t==0){ res.push_back(cur); return; }
    for(int j=i;j<a.size() && a[j]<=t;j++){
        if(j>i && a[j]==a[j-1]) continue;
        cur.push_back(a[j]);
        dfs(a,t-a[j],j+1,cur);
        cur.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int>& a, int t){
    sort(a.begin(),a.end());
    res.clear();
    vector<int> cur;
    dfs(a,t,0,cur);
    return res;
}
int main(){}
