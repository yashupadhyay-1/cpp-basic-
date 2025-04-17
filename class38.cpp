#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};
void insert_at_head(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void reverseLL(Node* &head){
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;
    while(curr!=NULL){
        forward = curr->next;
        curr->next=prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
}
int main(){
    Node* node1 = new Node(10);
    Node* head= node1;
    insert_at_head(head,20);
    insert_at_head(head,30);
    insert_at_head(head,40);
    print(head);
    reverseLL(head);
    print(head); 
}