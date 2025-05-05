#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node(int n){
        this->data = n;
        this->next = NULL;
    }
};
void reverseLL(Node* &head){
    Node* curr = head;
    Node* prev = NULL;
    while(curr!=NULL){
        Node*next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}
void insertAtTail(Node*&head,Node*&tail,int digit){
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
Node* addNO(Node*first,Node*second){
    reverseLL(first);
    reverseLL(second);
    int carry = 0;
    Node* anshead = NULL;
    Node* anstail = NULL;
    while(first!=NULL && second!=NULL){
        int sum = carry + first->data + second->data;
        int digit = sum%10;
        insertAtTail(anshead,anstail,digit);
        carry = sum/10;
        first=first->next;
        second = second->next;
    }
    while(first!=NULL){
        int sum = carry + first->data;
        int digit = sum%10;
        insertAtTail(anshead,anstail,digit);
        carry = sum/10;
        first=first->next;
    }
    while(second!=NULL){
        int sum = carry + second->data;
        int digit = sum%10;
        insertAtTail(anshead,anstail,digit);
        carry = sum/10;
        second = second->next;
    }
    if(carry!=0){
        insertAtTail(anshead,anstail,carry);
    }
    reverseLL(anshead);
    return anshead;
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    Node *node1 = new Node(2);
    Node *node2 = new Node(4);
    Node *node3 = new Node(9);
    Node *node4 = new Node(1);
    node1->next = node2;
    node2->next = node3;
    Node* first = node1;
    Node* second = node4;
    print(first);
    print(second);
    Node* added = addNO(first,second);
    print(added);
}




