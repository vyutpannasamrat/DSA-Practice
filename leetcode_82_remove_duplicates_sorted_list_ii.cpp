#include <bits/stdc++.h>
using namespace std;
struct ListNode{int val; ListNode* next; ListNode(int x):val(x),next(NULL){} };
ListNode* deleteDuplicates(ListNode* h){
    ListNode d(0); d.next=h;
    ListNode* p=&d;
    while(h){
        if(h->next && h->val==h->next->val){
            int v=h->val;
            while(h && h->val==v) h=h->next;
            p->next=h;
        } else {
            p=h; h=h->next;
        }
    }
    return d.next;
}
int main(){}
