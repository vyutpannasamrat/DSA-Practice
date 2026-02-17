#include <bits/stdc++.h>
using namespace std;
int cnt=0;
void dfs(int n, int pos, vector<bool>& used){
    if(pos>n){ cnt++; return; }
    for(int i=1;i<=n;i++){
        if(!used[i] && (i%pos==0 || pos%i==0)){
            used[i]=true;
            dfs(n,pos+1,used);
            used[i]=false;
        }
    }
}
int countArrangement(int n){
    cnt=0;
    vector<bool> used(n+1,false);
    dfs(n,1,used);
    return cnt;
}
int main(){}
