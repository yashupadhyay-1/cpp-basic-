#include<iostream>
using namespace std;
#include<vector>

int fibo(int n,vector<int>&id){
    if(n<=1){
        return n;
    }
    if(id[n]!=-1){
        return id[n];
    }
    id[n] = fibo(n-1,id) + fibo(n-2,id);
    return id[n];
}
int main(){
    int n;
    cout<<"Enter the value of the no:";
    cin>>n;
    vector<int>id(n,-1);
    int c = fibo(n,id);
    cout<<c;
}