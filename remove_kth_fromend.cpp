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
   void remove_kth_node_from_end(node *&head,int k){
    node *ptr1 = head;
    node *ptr2 = head;

    int count = k;
    while(k--){
        ptr2 = ptr2->next;
    }
    if(ptr2==NULL){
        node *temp = head;
        head = head->next;
        free(temp);
        return;
    }

    while(ptr2->next!=NULL){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    node *temp = ptr1->next;
    ptr1->next = ptr1->next->next;
    free(temp);
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
   remove_kth_node_from_end(ll.head,6);
   ll.display();
   
}