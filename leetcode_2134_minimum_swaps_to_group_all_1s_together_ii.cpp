#include <bits/stdc++.h>
using namespace std;
int minSwaps(vector<int>& a){
    int ones=accumulate(a.begin(),a.end(),0);
    if(ones<=1) return 0;
    int n=a.size();
    vector<int> b(2*n);
    for(int i=0;i<2*n;i++) b[i]=a[i%n];
    int cur=0, mx=0;
    for(int i=0;i<b.size();i++){
        cur+=b[i];
        if(i>=ones) cur-=b[i-ones];
        if(i>=ones-1) mx=max(mx,cur);
    }
    return ones-mx;
}
int main(){}
