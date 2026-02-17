#include <bits/stdc++.h>
using namespace std;
int res=INT_MAX;
void dfs(vector<int>& c, vector<int>& kids, int i){
    if(i==c.size()){
        res=min(res, *max_element(kids.begin(),kids.end()));
        return;
    }
    for(int j=0;j<kids.size();j++){
        kids[j]+=c[i];
        dfs(c,kids,i+1);
        kids[j]-=c[i];
        if(kids[j]==0) break;
    }
}
int distributeCookies(vector<int>& c, int k){
    vector<int> kids(k,0);
    dfs(c,kids,0);
    return res;
}
int main(){}
