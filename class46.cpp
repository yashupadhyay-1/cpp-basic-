#include<iostream>
using namespace std;
#include<stack>

int main(){
    // creation
    stack<int> s;
    // push operations 
    s.push(3);
    s.push(2);
    //printing top element
    cout<<s.top();
    cout<<endl;
    //pop operation
    s.pop();
    //again printing top element
    cout<<s.top();
    //size of the stack 
    cout<<endl<<"size of the stack is "<<s.size()<<endl;
}
