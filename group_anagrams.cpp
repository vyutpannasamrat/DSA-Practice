
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    unordered_map<string, vector<string>> mp;
    for(string s: strs){
        string key = s;
        sort(key.begin(), key.end());
        mp[key].push_back(s);
    }
    for(auto &p: mp){
        for(string &x: p.second) cout << x << " ";
        cout << endl;
    }
    return 0;
}
