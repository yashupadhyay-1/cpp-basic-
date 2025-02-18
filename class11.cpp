#include<iostream>
using namespace std;
int first_occurence(int arr[],int n,int no){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==no){
            ans=mid;
            e=mid-1;
        }
        if(arr[mid]>no){
            e=mid-1;
        }
        if(arr[mid]<no){
            s=mid+1;
        }
        }
        return ans+1;
    }
    int last_occurence(int arr[],int n, int no){
        int s=0;
        int e=n-1;
        int ans= -1;
        while(s<=e){
            int mid=(s+e)/2;
            if(arr[mid]==no){
                ans=mid;
                s=mid+1;
            }
            else if(arr[mid]<no){
                s=mid+1;
            }
            else{
                e=e-1;
            }
        }
        return ans+1;
    }
    //peak of a moutain
    int peak(int arr[],int n){
        int s=0;
        int e=n-1;
        while(s<=n){
            int mid=(s+e)/2;
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else if(arr[mid]<arr[mid-1]){
                e=mid-1;
            }
            else{
                return arr[mid];
            }
        }
    }
int main(){
    int array[5]={12,19,19,19,19};
    int a=first_occurence(array,5,19);
    int d=last_occurence(array,5,19);
    cout<<"The first occurence of the given no is "<<a<<endl;
    cout<<"The last occurence of the given no is "<<d<<endl;
    //no of times any no repeats is last occurence - first occurence +1
    cout<<"The no of times the given no repeats is "<<d-a+1;
    int array1[6]={1,3,5,7,3,1};
    int e=peak(array1,6);
    cout<<endl<<e;
}
