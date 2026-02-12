
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {-2,1,-3,4,-1,2,1,-5,4};
    int cur = a[0], best = a[0];
    for(int i=1;i<a.size();i++){
        cur = max(a[i], cur + a[i]);
        best = max(best, cur);
    }
    cout << best;
    return 0;
}
