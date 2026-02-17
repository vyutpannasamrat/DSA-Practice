#include <bits/stdc++.h>
using namespace std;
int minOperations(vector<int>& a, int x){
    int sum=accumulate(a.begin(),a.end(),0);
    int target=sum-x;
    if(target<0) return -1;
    int l=0, cur=0, best=-1;
    for(int r=0;r<a.size();r++){
        cur+=a[r];
        while(l<=r && cur>target) cur-=a[l++];
        if(cur==target) best=max(best, r-l+1);
    }
    return best==-1 ? -1 : a.size()-best;
}
int main(){}
