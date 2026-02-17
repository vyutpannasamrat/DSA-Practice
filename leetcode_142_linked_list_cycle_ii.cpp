#include <bits/stdc++.h>
using namespace std;
struct ListNode{int val; ListNode* next;};
ListNode* detectCycle(ListNode* h){
    ListNode* s=h; ListNode* f=h;
    while(f && f->next){
        s=s->next; f=f->next->next;
        if(s==f){
            s=h;
            while(s!=f){ s=s->next; f=f->next; }
            return s;
        }
    }
    return NULL;
}
int main(){}
