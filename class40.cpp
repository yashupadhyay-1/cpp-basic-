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
void print(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//reverse using recursion
void reverse(Node* &head,Node* curr,Node* prev){
    if(curr == NULL){
        head = prev;
        return;
    }
    Node* forward = curr->next;
    reverse(head,forward,curr);
    curr->next=prev;
}
Node* Kreverse(Node* &head,int k){
    if(head==NULL){
        return NULL;
    }
    Node* curr=head;
    Node* prev=NULL;
    Node* next=NULL;
    int cnt = 0;
    while(cnt<k && curr!=NULL){
        next=curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }
    if(next!=NULL){
        head->next = Kreverse(next,k);
    }
    return prev;
}


int main(){
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);
    Node* head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    print(head);
    reverse(head,head,NULL);
    print(head);
    Node* temp = Kreverse(head,2);
    print(temp);
 
}






