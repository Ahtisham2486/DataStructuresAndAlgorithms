#include<iostream>
using namespace std;
void changeA(int *ptr){//pass by refrence 
    *ptr=  20;
}

int main(){
    int a =10;
    changeA(&a);
    cout <<"inside main function:"<< a << endl;

    // int a=5;
    // int *p =&a;
    // int **q=&p;
    // cout<<*p<<endl;
    // cout<<**q<<endl;
    // cout<<p<<endl;
    // cout<<*q<<endl;

    

    
    return 0;

}