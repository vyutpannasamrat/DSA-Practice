#include <bits/stdc++.h>
using namespace std;
int ans=0, k;
unordered_map<int,int> mp;
void dfs(vector<int>& a, int i){
    if(i==a.size()){ ans++; return; }
    dfs(a,i+1);
    if(mp[a[i]-k]==0 && mp[a[i]+k]==0){
        mp[a[i]]++;
        dfs(a,i+1);
        mp[a[i]]--;
    }
}
int beautifulSubsets(vector<int>& a, int K){
    k=K; ans=0; mp.clear();
    dfs(a,0);
    return ans-1;
}
int main(){}
