#include <bits/stdc++.h>
using namespace std;
vector<int> find(vector<int>& a, int x){
    int l=0,r=a.size()-1,f=-1,la=-1;
    while(l<=r){ int m=(l+r)/2; if(a[m]>=x){ if(a[m]==x) f=m; r=m-1; } else l=m+1; }
    l=0; r=a.size()-1;
    while(l<=r){ int m=(l+r)/2; if(a[m]<=x){ if(a[m]==x) la=m; l=m+1; } else r=m-1; }
    return {f,la};
}
int main(){}
