
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "anagram", t = "nagaram";
    if(s.size() != t.size()){ cout<<"False"; return 0; }
    vector<int> cnt(26,0);
    for(char c: s) cnt[c-'a']++;
    for(char c: t) cnt[c-'a']--;
    for(int x: cnt){
        if(x != 0){ cout<<"False"; return 0; }
    }
    cout<<"True";
    return 0;
}
