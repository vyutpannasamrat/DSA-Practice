#include <bits/stdc++.h>
using namespace std;
struct ListNode{int val; ListNode* next; ListNode(int x):val(x),next(NULL){} };
ListNode* rev(ListNode* a, ListNode* b){
    ListNode* p=b;
    while(a!=b){
        ListNode* n=a->next;
        a->next=p;
        p=a; a=n;
    }
    return p;
}
ListNode* reverseKGroup(ListNode* h, int k){
    ListNode* a=h; ListNode* b=h;
    for(int i=0;i<k;i++){ if(!b) return h; b=b->next; }
    ListNode* nh = rev(a,b);
    a->next = reverseKGroup(b,k);
    return nh;
}
int main(){}
