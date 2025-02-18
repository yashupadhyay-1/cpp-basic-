#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no upto which you want counting and sum:";
    cin>>n;
    int sum=0;
    for(int a=1;a<=n;a++){
        cout<<a<<" ";
        sum=sum+a;
    }
    cout<<endl<<"The sum of the no upto "<<n<<" is "<<sum<<endl;
    //prime or not
    int m;
    cout<<"Enter the value which you want to check:";
    cin>>m;
    int c=0;
    for(int b=2;b<m;b++){
        if(m%b==0){
            c=1;
            break;
        }
    }
    if(c==1){
        cout<<"The no is not prime";
    }
    else{
        cout<<"The no is prime";
    }
}