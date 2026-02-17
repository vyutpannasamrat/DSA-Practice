#include <bits/stdc++.h>
using namespace std;
vector<int> boundaryTraversal(vector<vector<int>>& m){
    vector<int> r;
    int n=m.size(), p=m[0].size();
    if(n==1){ for(int j=0;j<p;j++) r.push_back(m[0][j]); return r; }
    if(p==1){ for(int i=0;i<n;i++) r.push_back(m[i][0]); return r; }
    for(int j=0;j<p;j++) r.push_back(m[0][j]);
    for(int i=1;i<n;i++) r.push_back(m[i][p-1]);
    for(int j=p-2;j>=0;j--) r.push_back(m[n-1][j]);
    for(int i=n-2;i>0;i--) r.push_back(m[i][0]);
    return r;
}
int main(){}
