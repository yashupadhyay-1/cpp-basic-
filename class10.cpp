#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int no){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==no){
            return mid+1;
        }
        else if(arr[mid]<no){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    } 
    return -1;  
}
int main(){
    int array[5]={3,6,8,14,18};
    int a=binary_search(array,5,14);
    cout<<a<<endl;

}