#include<iostream>
using namespace std;

class Hero{
    public:
    int power;
    char rating;
    //points to keep in mind is that hero folder should be public to run.
    //this-> represents the upper variable not the varible in function.
    Hero(){
        cout<<"constructor called";
    }
    //we are setting the variable as to take inputs directly.
    Hero(int power,char rating){
        this->power=power;
        this->rating=rating;
    }
    //we can also create a function to print  
    void print(){
        cout<<power<<"  "<<rating<<endl;
    }
};
int main(){
    Hero roman(90,'A');
    cout<<roman.power;
    cout<<endl<<roman.rating<<endl;
    roman.print();
    //we can also copy one object into another 
    Hero dean(roman);
    dean.print();
}