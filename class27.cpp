#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int climb_stairs(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    return climb_stairs(n-1)+climb_stairs(n-2);
}
void numbers(int n){
    if(n==0){
        return;
    }
    string no[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int a=n%10;
    numbers(n/10);
    cout<<no[a]<<" ";
}

int main(){
    int a=fibo(5);
    cout<<a<<endl;
    int b=climb_stairs(3);
    cout<<b<<endl;
    numbers(100);
    cout<<endl;
}