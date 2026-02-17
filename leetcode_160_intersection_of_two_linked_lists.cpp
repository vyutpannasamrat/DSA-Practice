#include <bits/stdc++.h>
using namespace std;
struct ListNode{int val; ListNode* next;};
ListNode* getIntersectionNode(ListNode* a, ListNode* b){
    if(!a||!b) return NULL;
    ListNode* p=a; ListNode* q=b;
    while(p!=q){
        p = p? p->next : b;
        q = q? q->next : a;
    }
    return p;
}
int main(){}
