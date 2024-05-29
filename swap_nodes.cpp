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
node *swapnodes(node *&head){
    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }
    node *secondnode = head->next;
    head->next = swapnodes(secondnode->next);
    secondnode->next = head;

    return secondnode;
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
   
   
   
   ll1.display();
   ll1.head = swapnodes(ll1.head);
   ll1.display();
}