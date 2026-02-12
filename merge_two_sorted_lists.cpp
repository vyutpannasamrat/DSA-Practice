
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;
    Node(int x): val(x), next(NULL) {}
};

Node* mergeLists(Node* a, Node* b){
    Node* dummy = new Node(0);
    Node* t = dummy;
    while(a && b){
        if(a->val < b->val){
            t->next = a; a = a->next;
        } else {
            t->next = b; b = b->next;
        }
        t = t->next;
    }
    if(a) t->next = a;
    if(b) t->next = b;
    return dummy->next;
}

int main(){
    Node* a = new Node(1);
    a->next = new Node(3);
    a->next->next = new Node(5);
    Node* b = new Node(2);
    b->next = new Node(4);
    b->next->next = new Node(6);
    Node* h = mergeLists(a,b);
    for(Node* t=h; t; t=t->next) cout<<t->val<<" ";
    return 0;
}
