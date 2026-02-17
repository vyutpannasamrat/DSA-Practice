#include <bits/stdc++.h>
using namespace std;
int minimizeDifference(vector<int>& a, int k){
    sort(a.begin(),a.end());
    int ans=INT_MAX;
    for(int i=0;i+k-1<a.size();i++) ans=min(ans, a[i+k-1]-a[i]);
    return ans;
}
int main(){}
