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
node *rotate_by_k(node *&head,int k){
    //step1 finding length
    int n = 0;
    //step2 finding tail node
    node *tail = head;
    while(tail->next!=NULL){
        n++;
        tail = tail->next;
    }
    n++;//for including last node

    tail->next = head;

    node *temp = head;
    for(int i=1;i<n-k;i++){
       temp = temp->next;
    }
    node *new_head = temp->next;
    temp->next = NULL;
    return new_head;
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
   ll1.insertattail(10);
   
   ll1.display();
   ll1.head = rotate_by_k(ll1.head,3);
   ll1.display();
}