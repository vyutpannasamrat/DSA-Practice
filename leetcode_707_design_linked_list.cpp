#include <bits/stdc++.h>
using namespace std;
struct Node{int v; Node* n; Node(int x):v(x),n(NULL){} };
class MyLinkedList {
    Node* h; int sz;
public:
    MyLinkedList():h(NULL),sz(0){}
    int get(int i){
        if(i<0||i>=sz) return -1;
        Node* c=h; while(i--) c=c->n;
        return c->v;
    }
    void addAtHead(int v){ Node* n=new Node(v); n->n=h; h=n; sz++; }
    void addAtTail(int v){
        Node* n=new Node(v);
        if(!h) h=n;
        else{ Node* c=h; while(c->n) c=c->n; c->n=n; }
        sz++;
    }
    void addAtIndex(int i,int v){
        if(i<0||i>sz) return;
        if(i==0){ addAtHead(v); return; }
        Node* c=h; for(int k=0;k<i-1;k++) c=c->n;
        Node* n=new Node(v); n->n=c->n; c->n=n; sz++;
    }
    void deleteAtIndex(int i){
        if(i<0||i>=sz) return;
        if(i==0){ Node* t=h; h=h->n; delete t; sz--; return; }
        Node* c=h; for(int k=0;k<i-1;k++) c=c->n;
        Node* t=c->n; c->n=t->n; delete t; sz--;
    }
};
int main(){}
