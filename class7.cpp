#include<iostream>
using namespace  std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;
}

int getmax(int arr[],int n){
    int min=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>min){
            min=arr[i];
        }
    }
    return min;
}
bool search(int arr[],int n,int item){
    for(int i=0;i<n;i++){
        if(arr[i]==item){
            return 1;
        }
    }
    return 0;
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

int main(){
    int array[5]={3,7,34,45,33};
    printarray(array,5);
    int a =getmax(array,5);
    cout<<a<<endl;
    cout<<search(array,5,34)<<endl;
    reverse(array,5);
    printarray(array,5);

}
