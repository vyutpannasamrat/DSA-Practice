#include <bits/stdc++.h>
using namespace std;
bool ok(const string& s,int i,int j){
    while(i<j) if(s[i++]!=s[j--]) return false;
    return true;
}
bool validPalindrome(string s){
    int i=0,j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]) return ok(s,i+1,j)||ok(s,i,j-1);
        i++; j--;
    }
    return true;
}
int main(){}
