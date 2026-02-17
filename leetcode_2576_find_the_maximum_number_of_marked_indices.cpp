#include <bits/stdc++.h>
using namespace std;
int maxNumOfMarkedIndices(vector<int>& a){
    sort(a.begin(),a.end());
    int n=a.size(), i=0, j=(n+1)/2, cnt=0;
    vector<bool> used(n,false);
    while(i<(n+1)/2 && j<n){
        if(2LL*a[i] <= a[j]){ cnt+=2; i++; j++; }
        else j++;
    }
    return cnt;
}
int main(){}
