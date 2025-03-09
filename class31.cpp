#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i=s+1;i<e-s+1;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    int pivot_index=s+cnt;
    swap(arr[pivot_index],arr[s]);
    //correcting left and right
    int i=s,j=e;
    while(i<pivot_index && j>pivot_index){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(j>pivot_index && i<pivot_index){
            swap(arr[i],arr[j]);
        }
    }
    return pivot_index;
}

void quick_sort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);

    quick_sort(arr,s,p-1);
    quick_sort(arr,p+1,e);
}
int main(){
    int array[5]={34,62,12,4,66};
    quick_sort(array,0,4);
    for(int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }
}