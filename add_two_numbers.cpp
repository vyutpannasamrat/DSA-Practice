
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;
    Node(int x): val(x), next(NULL) {}
};

Node* addTwoNumbers(Node* a, Node* b){
    Node* dummy = new Node(0);
    Node* t = dummy;
    int carry = 0;
    while(a || b || carry){
        int sum = carry;
        if(a){ sum += a->val; a = a->next; }
        if(b){ sum += b->val; b = b->next; }
        carry = sum / 10;
        t->next = new Node(sum % 10);
        t = t->next;
    }
    return dummy->next;
}

int main(){
    Node* a = new Node(2);
    a->next = new Node(4);
    a->next->next = new Node(3);

    Node* b = new Node(5);
    b->next = new Node(6);
    b->next->next = new Node(4);

    Node* c = addTwoNumbers(a,b);
    for(Node* t=c; t; t=t->next) cout<<t->val<<" ";
    return 0;
}
