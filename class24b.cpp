#include<iostream>
using namespace std;
//pass by referal
void update(int &a){
    a++;
}
int main(){
    int n=5;
    cout<<"The value of n before update is "<<n<<endl;
    update(n);
    cout<<"The value of n after updater is "<<n<<endl;
}