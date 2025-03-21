#include<iostream>
using namespace std;
void reverse_string(string &arr,int s,int e){
    if(s>=e){
        return;
    }
    swap(arr[s],arr[e]);
    s++;
    e--;
    reverse_string(arr,s,e);
}
bool pallendrome(string arr,int s,int e){
    if(s>=e){
        return true;
    }
    if(arr[s]!=arr[e]){
        return false;
    }
    else{
        return pallendrome(arr,++s,--e);
    }
}
void bubble_sort(int arr[],int n){
    if(n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubble_sort(arr,n-1);
}

int main(){
string a="PeeP";
reverse_string(a,0,3);
cout<<a;
int b=pallendrome(a,0,3);
cout<<endl<<b<<endl;
int arr[5]={4,2,3,12,9};
bubble_sort(arr,5);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}

}

