#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t){
    if(s.size()!=t.size()) return false;
    vector<int> c(26,0);
    for(char x:s) c[x-'a']++;
    for(char x:t) if(--c[x-'a']<0) return false;
    return true;
}
int main(){}
