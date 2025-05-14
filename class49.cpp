#include<iostream>
using namespace std;
class queue{
    public:
    int* arr;
    int front;
    int rear;
    int size;
    
    queue(int size){
        this->size = size;
        front = 0;
        rear = 0;
        arr = new int[size];
    }
    
    void push(int data){
        if(rear==size){
            cout<<"queue is full";
        }
        arr[rear] = data;
        rear++;
    }
    void pop(){
        if(front == rear){
            cout<<"queue is empty"<<endl;
        }
        else{
            arr[front] = -1;
            front++;
            if(front == rear ){
                front = rear = 0;
            }
        }
    }
    int getfront(){
        if(rear == front){
            cout<<"queue is empty";
            return -1;
        }
        else{
            return arr[front];
        }
    }
    bool empty(){
        if(front == rear){
            return true;
        }
        else{
            return false;
        }
    }
    void print(){
        for(int i=front;i<rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void about(){
        cout<<front<<" and "<<rear<<endl;
    }
    
};
int main(){
    queue q(10);
    q.push(4);
    q.push(9);
    q.push(1);
    q.print();
    q.pop();
    q.print();
    
}




