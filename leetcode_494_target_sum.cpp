#include <bits/stdc++.h>
using namespace std;
int findTargetSumWays(vector<int>& a, int t){
    int sum=accumulate(a.begin(),a.end(),0);
    if((sum+t)%2 || sum<t) return 0;
    int s=(sum+t)/2;
    vector<int> dp(s+1,0);
    dp[0]=1;
    for(int x:a){
        for(int j=s;j>=x;j--) dp[j]+=dp[j-x];
    }
    return dp[s];
}
int main(){}
