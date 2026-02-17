#include <bits/stdc++.h>
using namespace std;
struct Node{int data; Node* next; Node(int x):data(x),next(NULL){} };
Node* sortedInsert(Node* h, int k){
    Node* n=new Node(k);
    if(!h||k<=h->data){ n->next=h; return n; }
    Node* c=h;
    while(c->next && c->next->data<k) c=c->next;
    n->next=c->next; c->next=n;
    return h;
}
int main(){}
