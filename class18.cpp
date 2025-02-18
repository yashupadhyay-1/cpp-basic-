#include<iostream>
using namespace std;
 int get_length(char ch[]){
    int a=0;
        for(int i=0;ch[i]!='\0';i++){
            a++;
        }
        return a;
}
void reverse(char ch[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
}
bool check_palendrome(char ch[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(ch[s]==ch[e]){
            s++;
            e--;
        }
        if(ch[s]!=ch[e]){
            return 0;
        }
    }
    return 1;
} 
void lower_case(char ch[],int n){
    for(int i=0;i<n;i++){
        if(ch[i]>+'A'&&ch[i]<='Z'){
            ch[i]+='a'-'A';
        }
    }
}



int main(){
   
    char animal[10];
    cout<<"Enter your favouriter animal:";
    cin>>animal;
    cout<<animal<<endl;
    int a=get_length(animal);
    cout<<a<<endl;
    reverse(animal,a);
    cout<<animal;
    bool d=check_palendrome(animal,a);
    cout<<"The given string is palendrome or not:"<<d;
    lower_case(animal,a);
    cout<<endl<<animal<<endl;
    string e="hlo everyone" ;
    cout<<e;
    int q=e.length();
    cout<<endl<<q;


}