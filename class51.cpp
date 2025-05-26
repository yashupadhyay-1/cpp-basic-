#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* buildTree(Node* root){
cout<<"Enter the data:";
int data;
cin>>data;
root = new Node(data);
if(n==-1){
    return NULL;
}
cout<<"Enter the value of left of "<<data<<endl;
root->left = buildTree(root->left);
cout<<"Enter the value of right of "<<data<<endl;
root->right =  buildTree(root->right);
return root;
}
int main(){
    Node* root = NULL;
    root = buildTree(root);
}