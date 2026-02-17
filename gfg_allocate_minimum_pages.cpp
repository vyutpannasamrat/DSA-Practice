#include <bits/stdc++.h>
using namespace std;
bool can(vector<int>& a,int m,int cap){
    int cnt=1, cur=0;
    for(int x:a){
        if(cur+x>cap){ cnt++; cur=0; }
        cur+=x;
    }
    return cnt<=m;
}
int findPages(vector<int>& a, int m){
    if(m>a.size()) return -1;
    int l=*max_element(a.begin(),a.end()), r=accumulate(a.begin(),a.end(),0), ans=r;
    while(l<=r){
        int mid=(l+r)/2;
        if(can(a,m,mid)){ ans=mid; r=mid-1; }
        else l=mid+1;
    }
    return ans;
}
int main(){}
