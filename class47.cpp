#include<iostream>
using namespace std;
class stack{
    public:
    int *arr;
    int top;
    int size;
    
    //calling a function
    stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    
    void push(int n){
        if(top==size-1){
            cout<<"Stack Overflow";
        }
        else{
            top++;
            arr[top] = n;
        }
    }
    
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow";
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty";
            return -1;
        }
    }
};
int main(){
    stack st(5);
    st.push(43);
    st.push(34);
    cout<<st.peek();
    st.pop();
    cout<<endl<<"After"<<endl<<st.peek();
}





