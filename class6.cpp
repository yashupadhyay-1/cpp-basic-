#include<iostream>
using namespace std;
//functions

int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int fact(int n){
    int ans =1;
    for(int i=1;i<=n;i++){
        ans = ans * i;
    }
    return ans;
}
int nCr(int n,int r){
    int ans =fact(n)/fact(r)/fact(n-r);
    return ans;
}
void counting(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<",";
    }
}
bool isprime(int n){
    for(int i=2;i<n;i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
bool a=isprime(4);
cout<<a;
}