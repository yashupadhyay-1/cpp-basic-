#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no whose fibo no you want to find:";
    cin>>n;
    int prev1=1;
    int prev2=0;
    int ans;
    for(int i=2;i<=n;i++){
        ans = prev1 + prev2;
        prev2 = prev1;
        prev1 = ans;
    }
    cout<<ans;
}