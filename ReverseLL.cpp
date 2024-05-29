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
node *reverse(node *&head){
    node *prev_ptr = NULL;
    node *curr_ptr = head;

    while(curr_ptr!=NULL){
        node *next_ptr = curr_ptr->next;
        curr_ptr->next = prev_ptr;
        prev_ptr = curr_ptr;
        curr_ptr = next_ptr;
    }
    node *new_head = prev_ptr;
    return new_head;
}
int main(){
   LinkedList ll;
   ll.insertattail(1);
   ll.insertattail(2);
   ll.insertattail(3);
   ll.insertattail(4);
   ll.insertattail(5);
   ll.insertattail(6);
   ll.display();
   ll.head =  reverse(ll.head);
   ll.display();
   
}