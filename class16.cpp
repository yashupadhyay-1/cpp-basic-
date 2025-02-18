#include<iostream>
using namespace std;
void reverse_array(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s=s+1;
        e=e-1;
    }
}

//merge two sorted arrays
//no values in these arrays should be same.
void merge_arrays(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n&&j<m){
        if(arr1[i]>arr2[j]){
            arr3[k]=arr2[j];
            j++;
            k++;
        }
        else{
            arr3[k]=arr1[i];
            i++;
            k++;
        }
    }
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}
//moving zeroes
//example {2,0,1,3,0,0}--------{2,1,3,0,0,0}
void moving_zeroes(int arr[],int n){
    int non_zero=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[non_zero]);
            non_zero++;
        }
    }
}


int main(){
    int array[5]={4,8,14,19,25};
    int array2[3]={7,15,20};
    int array3[8];
    int arr[5]={23,0,3,0,0};
    moving_zeroes(arr,5);
    merge_arrays(array,5,array2,3,array3);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}