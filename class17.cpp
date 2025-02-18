#include<iostream>
using namespace std;
//rotated array {2,4,6,8,9}--------{8,9,2,4,6}   where k=2
void rotate_array(int arr[],int n,int k){
    int temp[n];
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
    for(int i=0;i<n;i++){
    arr[i]=temp[i];}
}

int main(){
    int array[5]={1,2,34,5,6};
    rotate_array(array,5,2);
    for(int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }

}