
#include <bits/stdc++.h>
using namespace std;

int main(){
    string hay = "hello", needle = "ll";
    int n = hay.size(), m = needle.size();
    if(m == 0){ cout << 0; return 0; }
    for(int i=0;i+m<=n;i++){
        if(hay.substr(i, m) == needle){
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
