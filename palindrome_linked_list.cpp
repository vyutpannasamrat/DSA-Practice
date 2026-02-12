
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;
    Node(int x): val(x), next(NULL) {}
};

Node* reverseList(Node* head){
    Node* prev=NULL;
    while(head){
        Node* nxt=head->next;
        head->next=prev;
        prev=head;
        head=nxt;
    }
    return prev;
}

bool isPalindrome(Node* head){
    if(!head || !head->next) return true;
    Node* slow=head;
    Node* fast=head;
    while(fast->next && fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* second = reverseList(slow->next);
    Node* p1=head;
    Node* p2=second;
    while(p2){
        if(p1->val != p2->val) return false;
        p1=p1->next;
        p2=p2->next;
    }
    return true;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);
    cout << (isPalindrome(head) ? "True" : "False");
    return 0;
}
