#include<iostream>
using namespace std;
bool binary_(int arr[][3],int row,int item){
    int s=0;
    int e=3*row-1;
    int mid;
    while(s<=e){
        mid=(s+e)/2;
        if(arr[mid/3][mid%3]==item){
            return true;
        }
        else if(arr[mid/3][mid%3]>item){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return false;
}

bool binary_lvl2(int arr[][4],int row,int item){
    int s_r=0;
    int e_c=3;
    while(s_r<row && e_c>=0){
        int element =arr[s_r][e_c];
        if(element == item){
            return true;
        }
        else if(element > item){
            e_c--;
        }
        else{
            s_r++;
        }
    }
    return false;
}
int main(){
    int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int c=binary_(array,3,7);
    cout<<c;
    int array1[4][4]={{10,20,30,40},{11,21,31,41},{12,22,32,42},{13,23,33,43}};
    cout<<endl;
    bool s= binary_lvl2(array1,4,31);
    cout<<s;
}