#include<iostream>
using namespace std;
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;
}
void reverse(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
void reverse_alt(int arr[],int n){
    int f=0;
    int s=1;
    while(s<n){
    swap(arr[f],arr[s]);
    s+=2;
    f+=2;
    }
}
int main(){
    int array[5]={23,34,56,25,48};
    reverse(array,5);
    cout<<array[4];
    print_array(array,5);
}