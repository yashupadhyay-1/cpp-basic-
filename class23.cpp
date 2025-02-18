#include<iostream>
using namespace std;
int main(){
    //understanding pointers-a variable that saves the address of other data variables
    int a=5;
    int *ptr=&a;
    //here * represents the pointer and tells ptr has the address of a
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    //pointers in array
    int arr[10]={2,3,4};
    // here arr is the pointer that has the adress of arr[0]
    cout<<arr<<endl;
    //but in char array address doesn't print the address but it prints the eleents from that element to last where it finds stopping sign \0

    char ch[15]="yash upadhyay";
    // here ch is pointer thar represents address of ch[0]
    cout<<ch;
    char *ab=&ch[2];
    cout<<endl<<ab<<endl;
    
    //double pointers
    //pointer of a pointer
    int d=5;
    int*p=&d;
    int **e=&p;
    cout<<"The value of e contains the adress of p: "<<e<<endl;
    cout<<"The value of *e contains adress of d: "<<*e<<endl;
    cout<<"The value of **e contains the value of d: "<<**e<<endl;
}