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
bool detect_cycle(node *head){
    node *slow = head;
    node *fast = head;
    
    if(head==NULL){
        return false;
    }
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
         
         if(slow==fast){
            cout<<fast->val<<endl;
            return true;
         }
    }
    return false;
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
   ll1.head->next->next->next->next->next->next->next->next = ll1.head->next->next;
   cout<<detect_cycle(ll1.head);
   
   
}