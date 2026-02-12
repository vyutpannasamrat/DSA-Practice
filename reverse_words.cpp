
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "the sky is blue";
    stringstream ss(s);
    vector<string> words;
    string w;
    while(ss >> w) words.push_back(w);
    reverse(words.begin(), words.end());
    for(int i=0;i<words.size();i++){
        cout << words[i];
        if(i+1 < words.size()) cout << " ";
    }
    return 0;
}
