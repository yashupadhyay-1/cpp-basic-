#include<iostream>
using namespace std;

int main(){
    //dynamic memory allocation
    //it does not have any variable so we use pointers to give the variable
    int *a=new int;
    *a=5;
    cout<<a<<endl;
    cout<<*a<<endl;
    int *arr=new int[10];
    for(int i=0;i<10;i++){
        cout<<"Enter the value of arr["<<i<<"]:";
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }


    delete a;
    delete []arr;
}