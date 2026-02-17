#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& m, int t){
    int n=m.size(), p=m[0].size();
    int l=0,r=n*p-1;
    while(l<=r){
        int mid=(l+r)/2;
        int v=m[mid/p][mid%p];
        if(v==t) return true;
        if(v<t) l=mid+1; else r=mid-1;
    }
    return false;
}
int main(){}
