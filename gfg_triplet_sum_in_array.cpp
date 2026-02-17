#include <bits/stdc++.h>
using namespace std;
bool find3Numbers(vector<int>& a, int x){
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        int l=i+1,r=a.size()-1;
        while(l<r){
            int s=a[i]+a[l]+a[r];
            if(s==x) return true;
            if(s<x) l++; else r--;
        }
    }
    return false;
}
int main(){}
