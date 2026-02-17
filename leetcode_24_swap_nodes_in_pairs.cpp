#include <bits/stdc++.h>
using namespace std;
struct ListNode{int val; ListNode* next; ListNode(int x):val(x),next(NULL){} };
ListNode* swapPairs(ListNode* h){
    ListNode d(0); d.next=h;
    ListNode* p=&d;
    while(p->next && p->next->next){
        ListNode* a=p->next;
        ListNode* b=a->next;
        a->next=b->next;
        b->next=a;
        p->next=b;
        p=a;
    }
    return d.next;
}
int main(){}
