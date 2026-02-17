#include <bits/stdc++.h>
using namespace std;
struct ListNode{int val; ListNode* next;};
ListNode* rev(ListNode* h){
    ListNode* p=NULL;
    while(h){ ListNode* n=h->next; h->next=p; p=h; h=n; }
    return p;
}
bool isPalindrome(ListNode* h){
    ListNode* s=h; ListNode* f=h;
    while(f&&f->next){ s=s->next; f=f->next->next; }
    s=rev(s);
    while(s){ if(h->val!=s->val) return false; h=h->next; s=s->next; }
    return true;
}
int main(){}
