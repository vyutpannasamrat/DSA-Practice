#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>& a){
    for(int i=0;i<a.size();i++){
        int mi=i;
        for(int j=i+1;j<a.size();j++) if(a[j]<a[mi]) mi=j;
        swap(a[i],a[mi]);
    }
}
int main(){}
