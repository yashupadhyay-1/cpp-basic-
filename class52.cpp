#include<iostream>
using namespace std;
#include<queue>
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int n){
        this->data = n;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* buildTree(Node* root){
    int data;
    cout<<"Enter the data:";
    cin>>data;
    root = new Node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter the data for the left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data for the right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}
void levelOrderTrasnversal(Node*root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
            
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }

        
    }
}
int main(){
    Node* root = NULL;
    root = buildTree(root);
    cout<<"Priting the tree"<<endl;
    levelOrderTrasnversal(root);
}
