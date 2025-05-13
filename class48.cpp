#include<iostream>
using namespace std;
#include<stack>
void sortMerge(stack<int>&s,int n){
    if(s.empty() || s.top()<=n){
        s.push(n);
        return;
    }
    int a = s.top();
    s.pop();
    sortMerge(s,n);
    s.push(a);
}
void sortStack(stack<int>&s){
    if(s.empty()){
        return;
    }
    int a = s.top();
    s.pop();
    sortStack(s);
    sortMerge(s,a);
}
void print(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<"  ";
        s.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> s;
    s.push(4);
    s.push(2);
    s.push(10);
    s.push(55);
    s.push(13);
    print(s);
    sortStack(s);
    print(s);
}






