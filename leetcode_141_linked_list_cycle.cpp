#include <bits/stdc++.h>
using namespace std;
struct ListNode{int val; ListNode* next;};
bool hasCycle(ListNode* h){
    ListNode* s=h; ListNode* f=h;
    while(f && f->next){
        s=s->next; f=f->next->next;
        if(s==f) return true;
    }
    return false;
}
int main(){}
