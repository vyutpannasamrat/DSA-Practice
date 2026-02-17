#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generateMatrix(int n){
    vector<vector<int>> m(n, vector<int>(n));
    int t=0,b=n-1,l=0,r=n-1,cur=1;
    while(t<=b && l<=r){
        for(int j=l;j<=r;j++) m[t][j]=cur++; t++;
        for(int i=t;i<=b;i++) m[i][r]=cur++; r--;
        for(int j=r;j>=l;j--) m[b][j]=cur++; b--;
        for(int i=b;i>=t;i--) m[i][l]=cur++; l++;
    }
    return m;
}
int main(){}
