#include <bits/stdc++.h>
using namespace std;
void bt(vector<int>& a, int i, vector<vector<int>>& r){
    if(i==a.size()){ r.push_back(a); return; }
    for(int j=i;j<a.size();j++){ swap(a[i],a[j]); bt(a,i+1,r); swap(a[i],a[j]); }
}
vector<vector<int>> permute(vector<int>& a){ vector<vector<int>> r; bt(a,0,r); return r; }
int main(){}
