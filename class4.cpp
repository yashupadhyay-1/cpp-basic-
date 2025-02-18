#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,b;
    cout<<"Enter the no whose binary you want to find:";
    cin>>n;
    int a=0;
    int i=0;
    while(n!=0){
        b=n&1;
        a=pow(10,i)*b+a;
        n=n>>1;
        i++;

    }
    cout<<"The value of binary is "<<a<<endl;
    //second method to find the binary
    int m;
    cout<<"Enter the value of no whose binary digit you want:";
    cin>>m;
    int d=0;
    int j=0;
    while(m!=0){
        int c=m%2;
        m=m/2;
        d=pow(10,j)*c+d;
        j++;
    }
    cout<<"The value of in binary is "<<d<<endl;
    //binary to number conversion
    int o;
    cout<<"Enter the binary number that you want to conver into integer:";
    cin>>o;
    int answer=0;
    int k=0;
    while(o!=0){
        int e=o%10;
        answer=answer + pow(2,k)*e;
        o=o/10;
        k++;
    }
    cout<<"The value of no in integer is "<<answer<<endl;
}