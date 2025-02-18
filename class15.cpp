#include<iostream>
#include<array>
using namespace std;
int main(){
    //array through another library
    int basic[3]={23,45,65};
    array<int,5>a={3,2,4,6,};
    int size=a.size();
    cout<<"The size of the array is "<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    } 
    cout<<endl;
    cout<<a.at(3)<<endl;
    cout<<"The first element of the array is "<<a.front()<<endl;
    cout<<"The second element of the array is "<<a.back()<<endl;



    //vectors

    
}