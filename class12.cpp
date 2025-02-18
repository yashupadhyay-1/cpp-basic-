#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int mid=(s+e)/2;
        if(arr[mid]>=arr[0]){
            s=s+1;
        }
        else if(arr[mid]<arr[0]){
            e=mid;
        }
    }
    return s+1;
}
int binary_search(int arr[],int n,int f,int no){
    int s=f-1;
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
int find_in_pivot(int arr[],int n,int z){
    int a=pivot(arr,n);
    int b;
    if(arr[a-1]<=z&&arr[n-1]>=z){
        b =binary_search(arr,n,a,z);
    }
    if(arr[a-2]>=z&&arr[0]<=z){
        b =binary_search(arr,a-1,1,z);
    }
    return b;


}


int main(){
    int array[6]={25,27,34,36,2,12};
    int c=pivot(array,6);
    cout<<c;
    int d=find_in_pivot(array,6,12);
    cout<<endl<<d;
}