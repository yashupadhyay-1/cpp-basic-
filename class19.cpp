#include<iostream>
using namespace std;
//linear search
bool linear_search(int arr[][3],int target,int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
void print_sum_row(int arr[][3],int row){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}
void print_sum_column(int arr[][3],int row){
    for(int j=0;j<3;j++){
        int sum=0;
        for(int i=0;i<row;i++){
            sum=sum+arr[i][j];
        }
    cout<<sum<<"   ";
    }
    cout<<endl;
}
int main(){
    int arr[3][3]={{1,1,1},{2,2,2},{3,3,3}};
   //giving input
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<"Enter a value in arr["<<i<<"]["<<j<<"]:";
            cin>>arr[i][j];
        }
    }
    //printing the double array
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    bool c=linear_search(arr,3,3,3);
    cout<<c<<endl;
    print_sum_row(arr,3);
    print_sum_column(arr,3);
}