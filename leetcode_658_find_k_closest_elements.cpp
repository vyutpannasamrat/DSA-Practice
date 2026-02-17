#include <bits/stdc++.h>
using namespace std;
vector<int> findClosestElements(vector<int>& a, int k, int x){
    int l=0, r=a.size()-k;
    while(l<r){
        int m=(l+r)/2;
        if(x-a[m] > a[m+k]-x) l=m+1;
        else r=m;
    }
    return vector<int>(a.begin()+l, a.begin()+l+k);
}
int main(){}
