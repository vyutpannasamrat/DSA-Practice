
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;
    Node(int x): val(x), next(NULL) {}
};

Node* reverseKGroup(Node* head, int k){
    Node* curr = head;
    int cnt = 0;
    while(curr && cnt < k){
        curr = curr->next;
        cnt++;
    }
    if(cnt < k) return head;

    curr = head;
    Node* prev = NULL;
    Node* nxt = NULL;
    cnt = 0;
    while(curr && cnt < k){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
        cnt++;
    }
    head->next = reverseKGroup(curr, k);
    return prev;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    head = reverseKGroup(head, 2);
    for(Node* t=head; t; t=t->next) cout<<t->val<<" ";
    return 0;
}
