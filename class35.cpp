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
void insert_at_head(Node* &head,int d){
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insert_at_tail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void insert_at_position(Node* head,int position,int d){
    Node*temp=head;
    int cnt = 1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    Node* inode=new Node(d);
    inode->next=temp->next;
    temp->next=inode;

}
void deleteNode(int position,Node* head){
    if(position==1){
        Node* temp = head;
        head=head->next;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt=1;
        while(cnt<position){
            prev = curr; 
            curr = curr->next;
            cnt++;
        }
        prev->next=curr->next;
        delete curr;
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){ 
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insert_at_head(head,20);
    insert_at_head(head,40);
    insert_at_tail(tail,5);
    insert_at_position(head,2,30);
    print(head);
    deleteNode(2,head);
    cout<<endl;
    print(head);

}