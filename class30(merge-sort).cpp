#include<iostream>
using namespace std;
void merge(int arr[],int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    //two arrays by dynamic memory
    int *first = new int[len1];
    int *second =new int[len2];
    //copying the values in 2 arrays
    int k=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[k];
        k++;
    }
    for(int i=0;i<len2;i++){
        second[i]=arr[k];
        k++;
    }
    int index1=0;
    int index2=0;
    k=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[k]=first[index1];
            k++;
            index1++;
        }
        else{
            arr[k]=second[index2];
            k++;
            index2++;
        }
    }
    while(index1<len1){
        arr[k]=first[index1];
        k++;
        index1++;
    }
    while(index2<len2){
        arr[k]=second[index2];
        k++;
        index2++;
    }
}
void merge_sort(int arr[],int s,int e){
    if(s>=e){
        return;
    }

    int mid=(s+e)/2;
    //using recursion
    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);
    //breaking and merging
    merge(arr,s,e);
}


int main(){
int array[5]={3,6,12,1,53};
merge_sort(array,0,4);
for(int i=0;i<5;i++){
    cout<<array[i]<<" ";
}
}