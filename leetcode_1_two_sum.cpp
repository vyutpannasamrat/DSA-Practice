#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& a, int t){
    unordered_map<int,int> m;
    for(int i=0;i<a.size();i++){
        if(m.count(t-a[i])) return {m[t-a[i]], i};
        m[a[i]]=i;
    }
    return {};
}
int main(){}
