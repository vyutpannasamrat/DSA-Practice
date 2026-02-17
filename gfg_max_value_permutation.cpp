#include <bits/stdc++.h>
using namespace std;
long long maxValue(int n, vector<int>& a, vector<int>& b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    long long s=0;
    for(int i=0;i<n;i++) s += 1LL*a[i]*b[i];
    return s;
}
int main(){}
