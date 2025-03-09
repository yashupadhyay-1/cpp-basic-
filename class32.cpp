#include<iostream>
using namespace std;

class Hero{
    int health;
    public:
    char power;

    //getter 
    int gethealth(){
        return health;
    }
    void sethealth(int n){
        health=n;
    }
    
};
// above we have a class named hero which have two properties which are health and power
int main(){
    Hero Yash;
    //now this class has an object Yash
    //we have three access identifiers -> i) public {we can access from anywhere} ii)private {can be accessed only in class} iii) protected {it is protected};
    //in above condition we have on property private and other public
    Yash.power='A';
    cout<<Yash.power<<endl;
    //we can not access the health properties directly we need to set (getter and setter) in the class to access them.
    //After set these setter and getter we can access.
    Yash.sethealth(90);
    cout<<Yash.gethealth()<<endl;
    // dynamic memory allocation as same as for int 
    Hero *b =new Hero;
    (*b).sethealth(49);
    cout<<(*b).gethealth()<<endl;
    //we can also use an alternator for'(*b).'
    cout<<b->gethealth()<<endl;
}