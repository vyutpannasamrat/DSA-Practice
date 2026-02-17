#include <bits/stdc++.h>
using namespace std;
bool can(vector<int>& a,int c,int d){
    int cnt=1,last=a[0];
    for(int i=1;i<a.size();i++){
        if(a[i]-last>=d){ cnt++; last=a[i]; if(cnt>=c) return true; }
    }
    return false;
}
int solve(vector<int>& a, int c){
    sort(a.begin(),a.end());
    int l=0,r=a.back()-a.front(), ans=0;
    while(l<=r){
        int m=(l+r)/2;
        if(can(a,c,m)){ ans=m; l=m+1; }
        else r=m-1;
    }
    return ans;
}
int main(){}
