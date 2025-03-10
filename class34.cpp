#include<iostream>
using namespace std;
//inheritence of class:
class human{
    public:
    int age;
    int height;
    string colour;
};

class men: public human{
    public:
    int weight;
};
//we cannot inherit private properties from parent object:
int main(){
    men object1;
    cout<<object1.age<<endl;
}