
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "   -42";
    int i = 0, n = s.size();
    while(i<n && s[i]==' ') i++;
    int sign = 1;
    if(i<n && (s[i]=='+' || s[i]=='-')){
        if(s[i]=='-') sign = -1;
        i++;
    }
    long long num = 0;
    while(i<n && isdigit(s[i])){
        num = num*10 + (s[i]-'0');
        if(num > INT_MAX) break;
        i++;
    }
    num = num * sign;
    if(num > INT_MAX) num = INT_MAX;
    if(num < INT_MIN) num = INT_MIN;
    cout << (int)num;
    return 0;
}
