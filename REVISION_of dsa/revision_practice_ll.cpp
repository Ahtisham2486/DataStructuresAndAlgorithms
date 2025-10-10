#include<iostream>
#include<vector>
using namespace std;
class node{
public:

    int data;
    node* next;
    node(int data1){
        data=data1;
        next=nullptr;
    };
};
//conversion of an array to a linked list//
//{12,2,3,4}
// always make a head
node* convert_arr(vector<int> &arr){
    node* head=new node(arr[0]);
    node*temp=head;

    for (int i=1; i<arr.size();i++){
    node* mover=new node(arr[i]);
    temp->next=mover;
    temp=mover;
}
    return head;

}
// length of a ll//
int length_of_ll(node*head){
    int count=0;
    node* temp=head;
    while(temp!=nullptr){
        temp=temp->next;
        count++;
    }
    return count;
}
int check_element(node*head, int val){
    node* temp=head;
    while(temp!=nullptr){
        if(temp->data==val){
          return 1;
        }
        temp=temp->next;
      
    }return 0;

}


// deletion of a node//
//a) delete head//
node* delete_head(node*head){
    node* temp=head;
    head=head->next;
    free(temp);
    return head;
}
// b ) delete tail
node * delete_tail(node*head){
    node* temp=head;
    if (head==NULL||head->next==NULL)return NULL;
                                                        // 12,3,4,5,6
    while(temp->next->next!= NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    return head;
}
node* delete_element_node(node*head,int el){
    if (head ==nullptr)return head;
    if(head->data==el){
        node*temp=head;
        head=head->next;
        delete temp;
        return head;
    }
       node*temp=head->next; node*prev=head;
       while(temp!= nullptr){
       
        if(temp->data==el){
            prev->next=temp->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;

}

// inserting a node at head 

node* insert_node(node*head,int val){
    node* temp=head;
    temp= new node(val);
    temp->next =head;


    return temp;

}
// inserting at tail;
node* insert_at_tail(node* head, int val){
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node* New_node=new node(98);
    temp->next=New_node;
    return head;

}
node* insert_at_kth_node(node*head,int val,int k){
    if(head==NULL)return new node(val);
    if(k==1){
        node* new_node= new node(val);
        new_node->next=head;
        return new_node;
    }
    int cnt=0;node* temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k-1){
            node* new_node= new node(val);
            // new_node= temp->next;
            new_node->next=temp->next;
            temp->next=new_node;
            break;
        }
        temp=temp->next;
    }

     return head;
}

node* finding_middle_of_ll(node*head){
    int cnt=0;
   
    node*temp=head;
    while(temp!=NULL){// count the cnt 
        cnt++;
        temp=temp->next;
    }
     int mid=(cnt/2)+1;
     //node* temp = head;
     while(temp!=NULL){
         if( mid==0){
            break;// finds the mid //
         }
         temp=temp->next;
     }
    cout<<mid<<endl;
    return temp;

}
// tortoise and hare method//find the middle//
node* mid_node(node*head){
    node* slow=head;
    node* fast= head;
    while(fast!=nullptr&& fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;// returns ll from middle
}
// reverse a linked list//
//12, 3, 4, 5,6,7  -> 7,6,5,4,3,12
 node* reverse_ll (node* head){
    if (head==NULL||head->next==NULL)return head;
    node* new_head=reverse_ll(head->next);
    node* front =head->next;
    front->next=head;
    head->next=NULL;
    return new_head;
}
// doubly linked list //





int main(){
    vector<int> arr ={12,3,4,5,6,7};
    node*head=convert_arr(arr);
    head=reverse_ll(head);
    cout<<check_element(head,4)<<endl;
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}