
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "A man, a plan, a canal: Panama";
    int l = 0, r = s.size()-1;
    while(l < r){
        if(!isalnum(s[l])){ l++; continue; }
        if(!isalnum(s[r])){ r--; continue; }
        if(tolower(s[l]) != tolower(s[r])){
            cout << "False";
            return 0;
        }
        l++; r--;
    }
    cout << "True";
    return 0;
}
