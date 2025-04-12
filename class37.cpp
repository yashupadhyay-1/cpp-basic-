//circular linked list
#include<iostream>
using namespace std;
 class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
 };
 void insertNode(Node* &tail,int d){
    if(tail==NULL){
        Node* node1 = new Node(d);
        node1->next=node1;
        tail=node1;
    }
    else{
        Node* temp = new Node(d);
        temp->next = tail->next;
        tail->next = temp;
        tail = temp;
    }
 }
 void print(Node* tail){
    Node* temp = tail;
    do{
        cout<<temp->next->data<<" ";
        temp=temp->next;
    }
        while(temp!=tail);
 }
 void deleteNode(Node* tail,int position){
    Node*curr = tail;
    Node* prev =NULL;
    int cnt =1;
    while(cnt<=position){
        prev = curr;
        curr= curr->next;
        cnt++;
    }
    prev->next=curr->next;
    delete curr;

 }


 int main(){
    Node* tail = NULL;
    insertNode(tail,10);
    insertNode(tail,20);
    insertNode(tail,30);
    insertNode(tail,40);
    deleteNode(tail,3);
    print(tail);

 }