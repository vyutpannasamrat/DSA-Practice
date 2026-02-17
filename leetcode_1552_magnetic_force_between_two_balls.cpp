#include <bits/stdc++.h>
using namespace std;
bool can(vector<int>& a,int m,int d){
    int cnt=1, last=a[0];
    for(int i=1;i<a.size();i++){
        if(a[i]-last>=d){ cnt++; last=a[i]; if(cnt>=m) return true; }
    }
    return false;
}
int maxDistance(vector<int>& a, int m){
    sort(a.begin(), a.end());
    int l=0,r=a.back()-a.front(), ans=0;
    while(l<=r){
        int mid=(l+r)/2;
        if(can(a,m,mid)){ ans=mid; l=mid+1; }
        else r=mid-1;
    }
    return ans;
}
int main(){}
