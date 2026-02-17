#include <bits/stdc++.h>
using namespace std;
struct ListNode{int val; ListNode* next; ListNode(int x):val(x),next(NULL){} };
ListNode* deleteDuplicates(ListNode* h){
    ListNode* c=h;
    while(c && c->next){
        if(c->val==c->next->val) c->next=c->next->next;
        else c=c->next;
    }
    return h;
}
int main(){}
