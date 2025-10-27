#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no whose fibo no you want to know:";
    cin>>n;
    vector<int> id(n+1);
    id[0]=0;
    id[1]=1;
    for(int i=2;i<=n;i++){
        id[i] = id[i-1]+id[i-2];
    }
    cout<<id[n];
}