#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:

    int data;
    Node* next;
    Node* prev;

    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }


};
// conversion of array to a doubly linked list //
// arr={2,3,4,5,6}
Node* conversion_to_dll(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node*prev=head;
    for(int i=1;i<arr.size();i++){
    Node*temp=new Node(arr[i]);
    prev->next=temp;
    temp->prev=prev;

    prev=temp;

    



}return head;
}
void print_ll(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//deleting a node //
//a) head 
Node*delete_head(Node*head){
    if(head==NULL || head->next==NULL)return NULL;
    Node*temp=head;
    head=head->next;
    head->prev=nullptr;
    temp->next=nullptr;
    delete temp;
    return head;
}
Node* delete_a_tail(Node* head){
    Node* temp= head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    Node* new_temp=temp->prev;
    new_temp->next=nullptr;
    temp->prev=nullptr;
    delete temp;
    

return head;

}
/// kth index of DLL//
Node* delete_kth_index_el(Node*head,int k){
    Node*temp=head;
    int cnt=0;
    while(temp!=nullptr){
        cnt++;
        if(cnt==k)break;
        temp=temp->next;
    }
    Node*back=temp->prev;
    Node* front=temp->next;
    
    if(back==NULL|| front==NULL){
        delete temp;
        return NULL;
    } else{// not clearing edge all case here 
        back->next=front;
        front->prev=back;
        temp->next=nullptr;
        temp->prev=nullptr;
        delete temp;
    }
return head;

}//

//insertion of node//
Node*insertion_of_head(Node* head, int val){
    Node* new_head=new Node(val);
    head->prev=new_head;
    new_head->next=head;
    return new_head;

}

// insertion at tail;




int main(){
    vector<int>arr={3,5,7,8,9};
    Node*head=conversion_to_dll(arr);
    head=insertion_of_head(head,1);
   print_ll(head);


    return 0;
}
