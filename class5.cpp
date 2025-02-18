//reverse a number 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the which you want to reverse:";
    cin>>n;
    int ans=0;
    while(n!=0){
        int a=n%10;
        ans=ans*10+a;
        n=n/10;
    }
    cout<<"The reverse of the given no is "<<ans<<endl;


//compliment of a number
    int m;
    cout<<"Enter the no whose complment you want:";
    cin>>m;
    int a=m;
    int mask=0;
    while(a!=0){
        a=a>>1;
        mask=mask<<1|1;
    }
    int answer=~m&mask;
    cout<<"The compliment of the given no is "<<answer;

    

}
