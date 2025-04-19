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
void uniqueSorted_LL(Node* head){
    Node* curr = head;
    while(curr!=NULL){
        if(curr->next!=NULL && curr->data==curr->next->data){
            Node* erase = curr->next;
            curr->next=curr->next->next;
            delete erase;
        }
        else{
            curr = curr->next;
        }
    }
}
void unique_unsortedLL(Node* head){
    Node* curr = head;
    while(curr!=NULL){
        Node* temp =curr->next;
        Node* prev = curr;
        while(temp!=NULL){
            if(temp->data==curr->data){
                Node* waste =temp;
                prev->next=temp->next;
                temp=temp->next;
                delete waste;
            }
            else{
                prev = temp;
                temp=temp->next;
            }
        }
        curr = curr->next;
    }
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1 = new Node(20);
    Node* head = node1;
    insert_at_head(head,50);
    insert_at_head(head,30);
    insert_at_head(head,20);
    insert_at_head(head,(50));
    print(head);
    unique_unsortedLL(head);
    print(head);
}