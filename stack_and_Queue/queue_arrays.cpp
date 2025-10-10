#include<iostream>
using namespace std;

 class que{ int size; int curr_size;int q[10];
    int start, end;
    
public:
que(){
    size=4;
    curr_size=0;
    start=-1; end=-1;
}
   void push(int x){
        if(curr_size==size){
            cout<<"que_overflow";
            return;
        }
        if(curr_size==0){
            start=0;end=0;
        }else{
            end=(end+1)%size;
        }
        q[end]=x;
        curr_size+=1;
    }
   void pop(){
        if(curr_size==0){
            cout<<"nohing to pop";
            return;
        } 
        if(curr_size==1){

            start=end=-1;
        }else{
            start=(start+1)%size;
        }
        curr_size-=1;

        
    }
    int top(){
        if(curr_size==0){
            cout<<"queue is empty";
            return -1;
        }
        cout<<q[start];
        return 0;
        
    }
    void display(){
        if(curr_size==0){
            cout<<"que is empty";
            return;
        }
        int i=start;
        for(int count=0;count<curr_size;count++){
            cout <<q[i]<<" ";
            i=(i+1)%size;
        }
    }

 };
int main(){
   que q;
   
     q.push(5);
     q.pop();
    q.push(9);
    q.push(11);
    q.pop();
    q.push(15);
    q.display();


    return 0;
}