#include <bits/stdc++.h>
using namespace std;
int minimumRemovals(vector<int>& a){
    int n=a.size();
    vector<int> pre(n), suf(n);
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
        pre[i]=mp.size();
    }
    mp.clear();
    for(int i=n-1;i>=0;i--){
        mp[a[i]]++;
        suf[i]=mp.size();
    }
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        ans=min(ans, pre[i]+(i+1<n?suf[i+1]:0));
    }
    return ans;
}
int main(){}
