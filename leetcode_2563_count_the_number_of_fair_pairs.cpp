#include <bits/stdc++.h>
using namespace std;
long long countFairPairs(vector<int>& a, int l, int r){
    sort(a.begin(),a.end());
    long long ans=0;
    for(int i=0;i<a.size();i++){
        int lo = lower_bound(a.begin()+i+1, a.end(), l-a[i]) - a.begin();
        int hi = upper_bound(a.begin()+i+1, a.end(), r-a[i]) - a.begin();
        ans += max(0, hi-lo);
    }
    return ans;
}
int main(){}
