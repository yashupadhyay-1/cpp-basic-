#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows:";
    cin>>n;
    int a=1;
    while(a<=n){
        int b=1;
        while(b<=a){
            cout<<"*";
            b=b+1;
        }
        cout<<endl;
        a=a+1;
    }
    //pattern2
    cout<<"Pattern2"<<endl;
    int c=1;
    char e='A';
    while(c<=n){
        int d=1;
        while(d<=n){
            cout<<e;
            d=d+1;
        }
        c=c+1;
        e=e+1;
        cout<<endl;
    }
    //pattern 3
    cout<<"Pattern 3"<<endl;
    int f=1;
    while(f<=n){
        int g=1;
        char h='A';
        while(g<=n){
        cout<<h;
        g=g+1;
        h=h+1;
        }  
        f=f+1;
        cout<<endl;
    }
    //pattern 4
    cout<<"pattern 4"<<endl;
    int i=1;
    while(i<=n){
        int g=1;
        while(g<=n-i){
        cout<<" ";
        g=g+1;
        }
        int h=1;
        while(h<=i){
            cout<<"*";
            h=h+1;
        }
        cout<<endl;
        i=i+1;
    }




}