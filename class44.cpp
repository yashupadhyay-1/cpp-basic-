#include<iostream>
using namespace std;
//clone a Linked List
class Node{
    public:
    int data;
    Node* next;
    
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAtTail(Node* &head,Node* &tail,int digit){
    Node* temp = new Node(digit);
    if(tail==NULL){
        tail = temp;
        head = temp;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}
Node* clone(Node* head){
    Node* temp = head;
    Node* anshead = NULL;
    Node* anstail = NULL;
    while(temp!=NULL){
        insertAtTail(anshead,anstail,temp->data);
        temp = temp->next;
    }
    return anshead;
}
int main()
{
    Node *node1 = new Node(2);
    Node *node2 = new Node(0);
    Node *node3 = new Node(0);
    Node *node4 = new Node(1);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    Node *head = node1;
    print(head);
    Node* newbee = clone(head);
    newbee->next = NULL;
    cout<<"after"<<endl;
    print(newbee);
    print(head);
    
}