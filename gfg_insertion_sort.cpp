#include <bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>& a){
    for(int i=1;i<a.size();i++){
        int k=a[i], j=i-1;
        while(j>=0 && a[j]>k){ a[j+1]=a[j]; j--; }
        a[j+1]=k;
    }
}
int main(){}
