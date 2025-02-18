#include<iostream>
using namespace std;
int primecount(int n){
    bool part[n+1];
    for(int a=0;a<n+1;a++){
        part[a]=1;
    }
    part[0]=part[1]=false;
    int count = 0;
    for(int a=2;a<n;a++){
        if(part[a]==1){
            count++;
            for(int b=2*a;b<n;b=b+a){
                part[b]=0;
            }
        }
    }
    return count;
}
int hcf(int a,int b){
    while(a!=0 && b!=0){
        if(a>b){
            a=a-b;
        }
        else if(b>a){
            b=b-a;
        }
        else{
            return b;
        }
        if(a==0){
            return b;
        }
        if(b==0){
            return a;
        }
    }
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    return -1;
}


int main(){
    int a=primecount(12);
    cout<<a<<endl;
    int b=hcf(15,9);
    cout<<b;
}