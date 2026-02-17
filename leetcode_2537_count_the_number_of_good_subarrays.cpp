#include <bits/stdc++.h>
using namespace std;
long long countGood(vector<int>& a, long long k){
    unordered_map<int,long long> mp;
    long long l=0, pairs=0, ans=0;
    for(int r=0;r<a.size();r++){
        pairs += mp[a[r]];
        mp[a[r]]++;
        while(pairs>=k){
            ans += a.size()-r;
            mp[a[l]]--;
            pairs -= mp[a[l]];
            l++;
        }
    }
    return ans;
}
int main(){}
