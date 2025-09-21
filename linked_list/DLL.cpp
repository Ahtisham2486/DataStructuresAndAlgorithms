#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;
    
    Node(int data1,Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;

    }
    
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }

};
// convert an array to linked list //
Node* convert_arr_DLL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,nullptr);
         temp->back=prev;
        prev->next=temp;
        prev=temp;
    }
    
return head;
   
} void print_DLL(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;

    }
}
Node* deleting_head(Node* head ){
    if(head==NULL||head->next==NULL){
        return NULL;
    }
    Node* temp=head;
    head=head->next;
    temp->back=nullptr;
    temp->next=nullptr;

    delete temp;
    return head;

}
Node* deleting_tail(Node* head){
    if(head==NULL||head->next==NULL){
        delete head;
        return NULL;
    }
    Node* tail=head;
    while(tail->next !=NULL){
        tail=tail->next;
       
    }
    Node* newtail=tail->back;
    newtail->next=nullptr;
    
    delete tail;
    return head;
}
Node* remove_kth_element(Node* head,int k){
    if(head==NULL)return NULL;
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt==k)break;
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* front=temp->next;
    if(prev==NULL&& front ==NULL){
        delete temp;
        return NULL;
    }
    else if(prev==NULL){
        head=deleting_head(head);
    }
    else if(front== NULL){
        head=deleting_tail(head);
    }
    else{
        prev->next=front;
        front->back=prev;
        temp->next=NULL;
        temp->back=NULL;
        delete temp;
    }
 return head;
}
void deleteNode(Node* temp){
    Node* prev=temp->back;
    Node* front=temp->next;
    if(front==NULL){
        prev->next=nullptr;
        temp->back=nullptr;
        delete temp;
        
    }
    prev->next=front;
    front->back=prev;
    temp->next=temp->back=nullptr;
    delete temp;
    


}
///////    ******************* insertion of node in DLL************//
//  a) before head//
Node* insert_before_head(Node* head, int val){
   Node* new_node=new Node(val,head,nullptr);
    head->back=new_node;
    return new_node;
}
// b   before  tail///
Node* insert_before_tail(Node* head, int val){
    if(head->next==NULL){
        return insert_before_head(head , val);
    }
    Node* temp=head;


    while(temp-> next!=NULL){  //arr={5,6,3,7 13 <-8-> [] }; 
        cout << "temp is at"<< temp-> data;

        temp=temp->next;
        // cout << "temp is at"<< temp->data;
       
    }
    Node* prev=temp->back;
    Node* newnode= new Node( val,temp,prev);
    prev->next=newnode;
    temp->back=newnode;
    return head;
}
Node* insert_before_kth_element(Node* head,int val, int k){
    if(k==1){
        head=insert_before_head(head,val);
        return head; 
    }
    Node* temp=head;
    int cnt=0;
    while(temp->next!=NULL){
        cnt++;
        if(cnt==k)break;
        
       temp=temp->next; 
    }
    Node* prev=temp->back;
    //Node* front= temp->next;
    Node* new_node= new Node(val,temp,prev);
    prev->next=new_node;
    temp->back=new_node;
    return head;


}
// reverse a linked list //
// 5,6,3,7,8 => 8,7,3,6,5//
// approach is like swaping no's .. here we swap links ....
Node* reverse_a_DLL(Node* head){
    if(head==NULL|| head->next==NULL)return head;
    Node* last=NULL;
    Node* curr=head;
    while(curr!= NULL){
        last=curr->back;
        curr->back=curr->next;
        curr->next=last;
        curr=curr->back;
        
    }
    return last->back;

}
Node* Middle_of_LL(Node* head)
{
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;

    }
    int midNode= (cnt/2)+1;
     temp=head;
    while(temp!= NULL){
        midNode-=1;
        if(midNode==0)break;
        temp=temp->next;
    }
    cout<< temp->data<< endl;
    return temp;
}




int main(){
    vector<int> arr={5,6,3,7,8};
    Node* head=convert_arr_DLL(arr);
    //=deleting_tail(head);
    Node* mid=Middle_of_LL(head);
    print_DLL(head);


    return 0;
}