#include <bits/stdc++.h>
using namespace std;
bool can(vector<int>& w,int d,int cap){
    int days=1, cur=0;
    for(int x:w){
        if(cur+x>cap){ days++; cur=0; }
        cur+=x;
    }
    return days<=d;
}
int shipWithinDays(vector<int>& w, int d){
    int l=*max_element(w.begin(),w.end()), r=accumulate(w.begin(),w.end(),0), ans=r;
    while(l<=r){
        int m=(l+r)/2;
        if(can(w,d,m)){ ans=m; r=m-1; }
        else l=m+1;
    }
    return ans;
}
int main(){}
