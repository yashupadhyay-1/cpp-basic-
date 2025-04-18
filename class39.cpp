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
int getlength(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
int middleLL(Node *head){
    int len = getlength(head);
    int middle = len/2 + 1;
    int cnt=1;
    Node* temp = head;
    while(cnt<middle){
        cnt++;
        temp = temp->next;
    }
    return temp->data;
}

int main(){
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    print(node1);
    int a = middleLL(node1);
    cout<<a;
}











