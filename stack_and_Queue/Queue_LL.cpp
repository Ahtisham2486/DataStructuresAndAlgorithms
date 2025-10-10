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
class Queue{
public:
    Node* st;
    Node* end;
    int size;
    Queue(){
        st=nullptr;
        end=nullptr;
        size=0;
    }
    void push(int x){
        Node* temp=new Node(x);
        if(st==NULL){
            st=end=temp;
        }else{
            end->next=temp;
            end=temp;
        
        }
        size+=1;
    }
    void pop(){
        Node* temp=st;
        if(st==NULL){
            cout<<"queue is empty";
           return; 
        }
        
        temp=st;
        st=st->next;
        delete temp;
        size-=1;

    }
    void display(){
        Node* temp=st;
         if(st==NULL){
            cout<< "queue is emoty";
        }
        while(temp!=nullptr){
            for(int i=0; i<=size;i++){
            cout<<temp->data;
            temp=temp->next;
        }
        }
       
       
      
    }

};



int main(){
    Queue q;
    q.push(5);
    q.push(7);
    q.push(9);
    q.pop();
    q.pop();
    q.display();
    return 0;
}