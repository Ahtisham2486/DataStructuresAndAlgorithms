#include <iostream>
#include <vector>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data1, node *next1 = nullptr)
    {
        data = data1;
        next = next1;
    }
};
node *convertArr(vector<int> &arr)// converts array to linked list 
{
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i<=arr.size();i++)
    {
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int length_of_LL(node *head) // function to find the length of a linked list
{
    int count = 0;
    node *temp = head;
    while (temp != nullptr)
    {

        temp = temp->next;

        count++;
    }
        cout<< endl;
    return count;
}
checkElement(node *head, int val) // checks if element is present in linked list or not //
{
    node *temp = head;
    int index = 0;
    while (temp)
    {
        index++;
        // cout<<"value is -> "+ temp->data;

        if (temp->data == val)
        {
            cout << "We are able to find the element in the linkedList ";
            cout<<endl;

            return 1;
        }
        temp = temp->next;
    }
    cout << "Not found";
    return 0;
}
node* delete_head(node*head){
    if( head==nullptr)return head;
    node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
void print_LL(node* head){
    node* temp=head;
    while (temp != nullptr)
    {
         cout<< temp->data   << "   "<<endl;
         temp = temp->next;
     }   
}
node* removetail(node* head){
    node*temp=head;
    if(head==NULL||head->next==NULL)return  NULL;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}
node*delete_K(node* head,int k){// deleting kth node from a linked list 
    if(head==NULL) return head;
    if(k==1){
        node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }

    int cnt=0; node*temp=head; node* prev=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;

}
node* insert_head(node*head , int val){
    node* temp= head;   
     temp=new node(val,head);
    return temp;

}
node* insert_tail(node*head,int val){
    if( head==NULL){
        return new node(val);
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next ;   
        }
    node* new_node=new node(val);
    temp->next=new_node;
    return head;
    }
node* insert_position(node* head , int val, int k){
    if(head==NULL){
        return new node(val);
    }
    if (k==1){
        return new node(val, head);
    }
    int cnt=0;
    node*  temp = head;
    while(temp!=NULL){
        cnt++;
        if(cnt==(k-1)){
            node* x=new node(val, temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}
node* insert_position_2(node* head , int el, int val){// element before x //
    if(head==NULL){
        return NULL;
    }
    if (head->data==val){
        return new node(el, head);
    }
   
    node*  temp = head;
    while(temp!=NULL){
        
        if(temp->next->data==val){
            node* x=new node(el, temp->next);// connecting node tp linked list//
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}


int main()
{
    vector<int> arr = {12, 2, 3, 4};
    node *head = convertArr(arr); // calling the function 
   // print_LL(head);
    //head=delete_head(head);
    head=insert_position_2(head, 50,3);
    print_LL(head);
    //  cout<<length_of_LL(head);
   // cout << checkElement(head, 4);


    return 0;
}