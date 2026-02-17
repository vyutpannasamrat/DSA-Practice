#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& a){
    for(int i=0;i<a.size();i++)
        for(int j=0;j+1<a.size()-i;j++)
            if(a[j]>a[j+1]) swap(a[j],a[j+1]);
}
int main(){}
