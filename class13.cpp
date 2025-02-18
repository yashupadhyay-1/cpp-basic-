#include<iostream>
using namespace std;
int square_root(int n){
    int s=0;
    int e=n;
    int mid;
    int ans;
    while(s<=e){
        mid=(s+e)/2;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}
double precise_square_root(int n,int precision,int tempsol){
    double factor=1;
    double ans;
    for(int i=1;i<=precision;i++){
        factor=factor/10;
        for(double j=tempsol;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}


int main(){
    int c=square_root(30);
    cout<<c<<endl;
    cout<<precise_square_root(30,2,c);
}