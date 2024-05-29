#include<iostream>
#include<vector>
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
node *reorder(node *&head){
    node *slow = head;
    node *fast = head;

    while(fast && fast->next){
     slow = slow->next;
     fast = fast->next->next;
    }

    node *curr = slow->next;
    slow->next = NULL;
    node *prev = slow;
    while(curr){
     node *nextptr = curr->next;
     curr->next = prev;

     prev = curr;
     curr = nextptr;
    }

    node *ptr1 = head;
    node *ptr2 = prev;

    while(ptr1!=ptr2){
        node *temp = ptr1->next;
        ptr1->next = ptr2;
        ptr1 = ptr2;
        ptr2 = temp;
    }
    return head;
}
int main(){
   LinkedList ll1;
   ll1.insertattail(1);
   ll1.insertattail(2);
   ll1.insertattail(3);
   ll1.insertattail(4);
   ll1.insertattail(5);
   ll1.insertattail(6);
   ll1.insertattail(7);
   ll1.insertattail(8);
   ll1.insertattail(9);
   
   
   ll1.display();
   ll1.head = reorder(ll1.head);
   ll1.display();
}