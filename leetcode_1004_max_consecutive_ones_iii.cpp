#include <bits/stdc++.h>
using namespace std;
int longestOnes(vector<int>& a, int k){
    int l=0, z=0, ans=0;
    for(int r=0;r<a.size();r++){
        if(a[r]==0) z++;
        while(z>k){
            if(a[l]==0) z--;
            l++;
        }
        ans=max(ans, r-l+1);
    }
    return ans;
}
int main(){}
