//doubly linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_at_head(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insert_at_tail(Node* tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail=temp;
}
void insert_at_position(Node* head,int position,int d){
    Node* temp = head;
    Node* inode = new Node(d);
    int cnt = 1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    inode->next = temp->next;
    inode->prev = temp;
    temp->next = inode;
}
int getLength(Node* head){
    int cnt =0;
    Node* temp = head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deleteNode(Node* &head,int position){
    if(position==1){
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next->prev=prev;
        delete curr;
    }
}
int main(){
    Node* node1=new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insert_at_head(head,20);
    insert_at_head(head,30);
    insert_at_tail(tail,5);
    insert_at_position(head,3,15);
    deleteNode(head,2);
    print(head);
}