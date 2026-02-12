
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;
    Node(int x): val(x), next(NULL) {}
};

Node* getIntersectionNode(Node* a, Node* b){
    Node* p = a;
    Node* q = b;
    while(p != q){
        p = p ? p->next : b;
        q = q ? q->next : a;
    }
    return p;
}

int main(){
    Node* common = new Node(8);
    common->next = new Node(10);

    Node* a = new Node(3);
    a->next = new Node(7);
    a->next->next = common;

    Node* b = new Node(99);
    b->next = common;

    Node* ans = getIntersectionNode(a,b);
    if(ans) cout << ans->val;
    else cout << "No Intersection";
    return 0;
}
