#include<iostream>
using namespace std;

int unique_element(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
void intersection(int arr1[],int m,int arr2[],int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
            if(arr1[i]<arr2[j]){
                break;
            }
        }
    }
}
//pair of two elements is equal to sum
void pairsum(int arr[],int n,int sum){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (arr[i]+arr[j]==sum){
                cout<<arr[i]<<" and "<<arr[j]<<" ";
            }
            if(arr[i]+arr[j]>sum){
                break;
            }
        }
    }
}
void sort1and0(int arr[],int n){
    int f=0;
    int s=n-1;
    while(f<s){
        if(arr[f]==0){
            f++;
        }
        if(arr[s]==1){
            s--;
        }
        if(arr[s]==0&&arr[f]==1){
            swap(arr[s],arr[f]);
            f++;
            s--;
        }
    }
}
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;
}
int main(){
    int array[5]={12,15,15,6,12};
    int a=unique_element(array,5);
    cout<<a<<endl;
    int arr1[5]={1,3,5,7,9};
    int arr2[7]={2,3,7,9,10,12,14};
    intersection(arr1,5,arr2,7);
    cout<<endl;
    int array1[5]={1,2,3,4,5};
    pairsum(array1,5,5);
    cout<<endl;
    int array3[8]={1,1,1,0,1,0,0,1};
    sort1and0(array3,8);
    print_array(array3,6);


}