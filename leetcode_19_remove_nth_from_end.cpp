#include <bits/stdc++.h>
using namespace std;
struct ListNode{int val; ListNode* next; ListNode(int x):val(x),next(NULL){} };
ListNode* removeNthFromEnd(ListNode* h, int n){
    ListNode d(0); d.next=h;
    ListNode* f=&d; ListNode* s=&d;
    for(int i=0;i<n;i++) f=f->next;
    while(f->next){ f=f->next; s=s->next; }
    ListNode* t=s->next; s->next=t->next; delete t;
    return d.next;
}
int main(){}
