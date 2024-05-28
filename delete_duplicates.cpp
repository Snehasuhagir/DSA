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
void dlt_dupl(node *&head){
    node *curr_node = head;
    while(curr_node!=NULL){
        while(curr_node->next!=NULL && curr_node->val==curr_node->next->val){
         node *temp = curr_node->next;
         curr_node->next = curr_node->next->next;
         free(temp);
        }
        curr_node = curr_node->next;
    }
}
int main(){
   LinkedList ll;
   ll.insertattail(1);
   ll.insertattail(2);
   ll.insertattail(2);
   ll.insertattail(3);
   ll.insertattail(3);
   ll.insertattail(3);
   ll.display();
   dlt_dupl(ll.head);
   ll.display();
}