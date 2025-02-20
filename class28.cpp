#include<iostream>
using namespace std;
bool is_sorted(int *arr,int n){
    if(n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return is_sorted(arr+1,n-1);
    }
}
int get_sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    return arr[0] + get_sum(arr+1,n-1);
}
bool linear_search(int arr[],int n,int item){
    if(n==0){
        return false;
    }
    if(arr[0]==item){
        return true;
    }
    else{
       return linear_search(arr+1,n-1,item);
    }
}
bool binary_search(int arr[],int s,int e,int item){
    int mid=(s+e)/2;
    if(s>e){
        return false;
    }
    if(arr[mid]==item){
        return true;
    }
    else if(arr[mid]>item){
        return binary_search(arr,s,mid-1,item);
    }
    else{
        return binary_search(arr,mid+1,e,item);
    }
}
int main(){
    int arr[5]={3,5,7,8,12};
    bool a=is_sorted(arr,5);
    cout<<a;   
    int b=get_sum(arr,5);
    cout<<endl<<b<<endl;
    bool c = linear_search(arr,5,9);
    cout<<c<<endl; 
    bool d=binary_search(arr,0,4,8);
    cout<<
}