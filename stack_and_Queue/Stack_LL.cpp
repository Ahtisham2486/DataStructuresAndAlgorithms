#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=nullptr;
    }

};
class stack{
         Node* top;
        int size;
    public:
    stack(){
        top=nullptr;
        size=0;
    }
    void push(int x){
        Node* temp= new Node(x);
        temp->next=top;
        top=temp;
        size+=1;
    }
     void pop(){
        if(top==nullptr){
            cout<<"stack overflow";
            return;
        }
        Node* temp=top;
        top=top->next;
        delete temp;
        size-=1;
     }
     void display(){
        Node* temp=top;

        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;

        }cout<<endl;
     }

};

int main(){
    stack s;
    s.push(5);
    s.push(4);
    s.push(7);
    s.pop();
    s.pop();
    s.display();

    return 0;
}