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
    for (int i = 1; i < arr.size(); i++)
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
node* insert_node(node*head , int val){
    node* temp= head;
     temp=new node(val,head);
    return temp;

}

int main()
{
    vector<int> arr = {12, 2, 3, 4};
    node *head = convertArr(arr); // calling the function 
   // print_LL(head);
    //head=delete_head(head);
    head=insert_node(head, 7);

    print_LL(head);
   //   cout<<length_of_LL(head);
   // cout << checkElement(head, 4);


    return 0;
}