
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {1,3,5,7,9};
    int x = 7;
    int l=0, r=a.size()-1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(a[mid]==x){ cout<<"Found at "<<mid; return 0; }
        else if(a[mid]<x) l=mid+1;
        else r=mid-1;
    }
    cout<<"Not Found";
    return 0;
}
