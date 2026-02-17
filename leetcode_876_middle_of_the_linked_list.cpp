#include <bits/stdc++.h>
using namespace std;
struct ListNode{int val; ListNode* next;};
ListNode* middleNode(ListNode* h){
    ListNode* s=h; ListNode* f=h;
    while(f&&f->next){ s=s->next; f=f->next->next; }
    return s;
}
int main(){}
