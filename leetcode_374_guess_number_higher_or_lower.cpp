#include <bits/stdc++.h>
using namespace std;
int guess(int); // API
int guessNumber(int n){
    int l=1,r=n;
    while(l<=r){
        int m=l+(r-l)/2;
        int g=guess(m);
        if(g==0) return m;
        if(g<0) r=m-1; else l=m+1;
    }
    return -1;
}
int main(){}
