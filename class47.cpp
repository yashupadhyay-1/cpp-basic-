#include<iostream>
using namespace std;
class TwoStack{
    public:
    int *arr;
    int top1;
    int top2;
    int size;
    //Making a new stack
    TwoStack(int size){
        this -> size = size;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }
    //push in the first stack
     void push1(int element){
         if(top2-top1==1){
             cout<<"Stack is full"<<endl;
             return;
         }
         else{
             top1++;
             arr[top1] = element;
         }
     }
     void push2(int element){
         if(top2-top1==1){
             cout<<"Stack is full"<<endl;
             return;
         }
         else{
             top2--;
             arr[top2]=element;
         }
     }
     void pop1(){
         if(top1==-1){
             cout<<"Stack is underflow"<<endl;
         }
         else{
             top1--;
         }
     }
     void pop2(){
         if(top2==size){
             cout<<"Stack2 is underflow"<<endl;
         }
         else{
             top2++;
         }
     }
     int gettop1(){
         return arr[top1];
     }
     int gettop2(){
         return arr[top2];
     }
};
int main(){
    TwoStack st(5);
    st.push1(3);
    st.push1(4);
    st.push1(5);
    st.push2(7);
    st.push2(8);
    st.push2(6);
    cout<<st.gettop2()<<endl;
    cout<<st.gettop1();
}





