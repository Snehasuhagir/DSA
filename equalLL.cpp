#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node *next;

    node(int data){
      val = data;
      next = NULL;
    }
};
class LinkedList{
    public:
    node *head;

    LinkedList(){
        head = NULL;
    }    
    void insertattail(int val){
        node *new_node = new node(val);
        if(head==NULL){
            head = new_node;
            return;
        } 
        node *temp = head;
        while(temp->next!=NULL){
        temp = temp->next;
        }
        temp->next = new_node;
    }
    
    void display(){
        node *temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
bool equal_ll(node *head1,node *head2){
   node *ptr1 = head1;
   node *ptr2 = head2;
   while(ptr1!=NULL && ptr2!=NULL){
     if(ptr1->val!=ptr2->val){
        return false;
     }
     ptr1 = ptr1->next;
     ptr2 = ptr2->next;
   }
   return (ptr1==NULL && ptr2==NULL);
}
   
int main(){
   LinkedList ll1;
   ll1.insertattail(1);
   ll1.insertattail(2);
   ll1.insertattail(3);
   ll1.insertattail(4);
   ll1.insertattail(5);
   ll1.insertattail(6);
   LinkedList ll2;
   ll2.insertattail(1);
   ll2.insertattail(2);
   ll2.insertattail(3);
   ll2.insertattail(4);
   ll2.insertattail(5);
   ll2.insertattail(6);
   ll1.display();
   ll2.display();
   cout<<equal_ll(ll1.head,ll2.head);
}