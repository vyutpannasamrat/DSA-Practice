#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s){
    string w, res; stringstream ss(s);
    vector<string> v; while(ss>>w) v.push_back(w);
    for(int i=v.size()-1;i>=0;i--){ res+=v[i]; if(i) res+=" "; }
    return res;
}
int main(){}
