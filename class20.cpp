#include<iostream>
using namespace std;
void print_wave(int arr[][3],int row){
    for(int j=0;j<3;j++){
        if(j%2==0){
            for(int i=0;i<row;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int k=row-1;k>=0;k--){
                cout<<arr[k][j]<<" ";
            }
            }
        }
    }

    void print_spiral(int arr[][3],int row){
        int s_r=0;
        int e_r=row-1;
        int s_c=0;
        int e_c=3-1;
        int count=0;
        while(count<3*row){
        for(int i=s_c;i<=e_c;i++){
            cout<<arr[s_r][i]<<" ";
            count++;
        }
        s_r++;
        for(int i=s_r;i<=e_r;i++){
            cout<<arr[i][e_c]<<" ";
            count++;            
        }
        e_c--;
        for(int i=e_c;i>=s_c;i--){
            cout<<arr[e_r][i]<<" ";
            count++;
        }
        e_r--;
        for(int i=e_r;i>=s_r;i--){
            cout<<arr[i][s_c]<<" ";
            count++;
        }
        s_c++;
        }
    }

int main(){
    int array[3][3]={1,5,6,7,9,3,5,8,3};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    print_wave(array,3);
    cout<<endl;
    print_spiral(array,3);
}