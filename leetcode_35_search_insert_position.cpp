#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& a, int t){
    int l=0,r=a.size();
    while(l<r){
        int m=(l+r)/2;
        if(a[m]<t) l=m+1; else r=m;
    }
    return l;
}
int main(){}
