#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& m, int t){
    int i=0, j=m[0].size()-1;
    while(i<m.size() && j>=0){
        if(m[i][j]==t) return true;
        if(m[i][j]>t) j--; else i++;
    }
    return false;
}
int main(){}
