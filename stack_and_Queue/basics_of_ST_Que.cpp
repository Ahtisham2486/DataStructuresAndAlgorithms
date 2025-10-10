#include<iostream>
using namespace std;
class stack{
    int top=-1;int stack[10];// stack using arrays 
     void push(int x){
        if(top>=10) return;
        top=top+1;
        stack[top]=x;
    }
    void pop(){
        if(top==-1) return;
        top=top-1;
    }
    int top(){
        if(top==-1) return;
         return stack[top];
    }
    int main(){
        
    }
};
