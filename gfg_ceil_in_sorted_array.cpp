#include <bits/stdc++.h>
using namespace std;
int ceilSearch(vector<int>& a, int x){
    int l=0,r=a.size()-1, ans=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]>=x){ ans=a[m]; r=m-1; }
        else l=m+1;
    }
    return ans;
}
int main(){}
