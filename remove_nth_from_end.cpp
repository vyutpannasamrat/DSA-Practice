
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;
    Node(int x): val(x), next(NULL) {}
};

Node* removeNthFromEnd(Node* head, int n){
    Node* dummy = new Node(0);
    dummy->next = head;
    Node* slow = dummy;
    Node* fast = dummy;
    for(int i=0;i<n;i++) fast = fast->next;
    while(fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;
    return dummy->next;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head = removeNthFromEnd(head, 2);
    for(Node* t=head; t; t=t->next) cout<<t->val<<" ";
    return 0;
}
