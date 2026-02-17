#include <bits/stdc++.h>
using namespace std;
struct ListNode{int val; ListNode* next;};
ListNode* reverseList(ListNode* h){
    ListNode* p=NULL;
    while(h){ ListNode* n=h->next; h->next=p; p=h; h=n; }
    return p;
}
int main(){}
