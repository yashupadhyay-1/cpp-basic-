#include<iostream>
using namespace std;
#include<queue>
#include<stack>
void print(queue<int> q){
   while(!q.empty()){
       cout<<q.front()<<" ";
       q.pop();
   }
   cout<<endl;
}
//reverse using stack
queue<int> reverse(queue<int> q){
     stack<int>s;
    while(!q.empty()){
        int a = q.front();
        s.push(a);
        q.pop();
    }
    while(!s.empty()){
        int b = s.top();
        q.push(b);
        s.pop();
    }
    return q;
}
//reverse by using recursion
void reverss(queue<int> &q){
    if(q.empty()){
        return;
    }
    int a = q.front();
    q.pop();
    reverss(q);
    q.push(a);
}
int main(){
    queue<int> q;
    q.push(56);
    q.push(33);
    q.push(63);
    print(q);
    reverss(q);
    print(q);
    
}