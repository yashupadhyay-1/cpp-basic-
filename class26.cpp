#include<iostream>
using namespace std;
// recursion
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int pow(int a,int b){
    if(b==0){
        return 1;
    }
    return a*pow(a,b-1);
}
void print_upto(int n){
    if(n==0){
        return;
    }
    cout<<n<<"  ";
    print_upto(n-1);
}
//on reversing the last two lines printing will be reversed
void print_2(int n){
    if(n==0){
        return;
    }
    print_2(n-1);
    cout<<n<<"  ";

}

int main(){
    int a=factorial(4);
    cout<<a<<endl;
    int b=pow(2,5);
    cout<<b<<endl;
    print_upto(5);
    cout<<endl;
    print_2(5);
    cout<<endl;
}