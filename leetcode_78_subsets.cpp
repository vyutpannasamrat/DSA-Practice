#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subsets(vector<int>& a){
    vector<vector<int>> r={{}};
    for(int x:a){
        int n=r.size();
        for(int i=0;i<n;i++){
            auto t=r[i];
            t.push_back(x);
            r.push_back(t);
        }
    }
    return r;
}
int main(){}
