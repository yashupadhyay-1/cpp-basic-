#include<iostream>
using namespace std;
int main(){
    //pattern 1;
    int n;
    cout<<"Enter the value of rows:";
    cin>>n;
    int a=1;
    while(a<=n){
        int b=1;
        while(b<=n){
            cout<<"*";          
            b=b+1;
        }
        a=a+1;
        cout<<endl;
    }  
    //pattern 2
    cout<<"Pattern 2"<<endl;
    int c=1;
    while(c<=n){
        int d=1;
        while(d<=n){
            cout<<c;
            d=d+1;
        }
        cout<<endl;
        c=c+1;
    }
    //pattern 4
    cout<<"Pattern 4"<<endl;
    int e;
    while(e<=n){
        int f=1;
        while(f<=n){
            cout<<f;
            f=f+1;
        }
        cout<<endl;
        e=e+1;
    }
    //pattern 5;
    cout<<"pattern 5"<<endl;
    int g=1;
    while(g<=n){
        int h=1;
        while(h<=n){
            cout<<n-h+1;
            h=h+1;
        }
        cout<<endl;
        g=g+1;
    }
    

}