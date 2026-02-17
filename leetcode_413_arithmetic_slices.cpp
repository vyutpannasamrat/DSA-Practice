#include <bits/stdc++.h>
using namespace std;
int numberOfArithmeticSlices(vector<int>& a){
    if(a.size()<3) return 0;
    int cur=0, ans=0;
    for(int i=2;i<a.size();i++){
        if(a[i]-a[i-1]==a[i-1]-a[i-2]){
            cur++;
            ans+=cur;
        } else cur=0;
    }
    return ans;
}
int main(){}
