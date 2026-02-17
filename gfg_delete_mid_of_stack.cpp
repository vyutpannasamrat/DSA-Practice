#include <bits/stdc++.h>
using namespace std;
void delMid(stack<int>& s, int k){
    if(k==1){ s.pop(); return; }
    int t=s.top(); s.pop();
    delMid(s, k-1);
    s.push(t);
}
void deleteMid(stack<int>& s){
    int k=(s.size()+1)/2;
    delMid(s,k);
}
int main(){}
