#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& a){
    int j=0;
    for(int i=0;i<a.size();i++) if(a[i]!=0) swap(a[i], a[j++]);
}
int main(){}
