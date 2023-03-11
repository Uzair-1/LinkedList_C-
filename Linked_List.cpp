#include<iostream>
using namespace std;
class node
{
  public:
    int data;
    node* next;
  node(int val)
  {
    data=val;
    next=NULL;
  }
   void insertAtfirst(node* &head, int val)            // 1->2->3->null add (4) at the first // 4->1->2->3->null
   {
     node* n= new node(val);
     n->next=head;
     head=n; 
   } 
  void insertAttail(node* &head, int val)                // insert data at tail 
  {                                                     // 1->2->null add (3) at the tail  // 1->2->3->null
    // create new node
    node* n = new node(val);
    if(head==NULL)                                      // if starting Point (head is Null)
    {
        head=n;
    }        
    node*temp=head;
    while(temp->next!=NULL)
    { 
        temp=temp->next;
    }
    temp->next=n;
  }
   bool search(node* head, int key)                // searching for any element in the Linked_list
    {
        node* temp=head;
        while (temp!=NULL)
        {
          if(temp->data==key)
          {
            return true;
          }
          temp=temp->next;
        }
        return false;
    }
  void display(node* head)                              // display the result
  {
    node* temp=head;
    while(temp!=NULL)
    {
        cout << temp->data << " --> ";
        temp=temp->next;
    }
    cout << " NULL " << endl;
  }
};
int main()
{
   node* head=NULL;
   cout << "Lets start" << endl;
   cout << "Insert at the Tail "<< endl;
   head->insertAtfirst(head,1);
   head->insertAttail(head,2);
   head->insertAttail(head,3);
   head->display(head);
   cout << "Insert at the First "<< endl;
   head->insertAtfirst(head,4);
   head->display(head);
   cout << "*************************" << endl;
   cout << "Searching the element  in Linked_List " << endl;
   cout << head->search(head,4);
   return 0;
}