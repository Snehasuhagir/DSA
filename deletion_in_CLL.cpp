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
class circular_LL{
  public:
    node *head;
     
     circular_LL(){
        head = NULL;
     }
  void display(){
    node *temp = head;
    do{
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    while(temp!=head);
    cout<<endl;
  }
  void printCircular(){
    node *temp = head;
    for(int i=0;i<15;i++){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<endl;
  }
     void insertion_at_start(int val){
        node *new_head = new node(val);
        if(head==NULL){
            head = new_head;
            new_head->next = head;
            return;
        }
        node *tail = head;
        while(tail->next!=head){
          tail = tail->next;
        }
        tail->next = new_head;
        new_head->next = head;
        head = new_head;
     }
     void insertion_at_end(int val){
        node *new_head = new node(val);
        if(head==NULL){
            head = new_head ;
            new_head->next = head;
            return;
        }
        node *tail = head;
        while(tail->next!=head){
            tail = tail->next;
        }
        tail->next = new_head;
        new_head->next = head;
     }
     void delete_at_start(){
        node *temp = head;
        node *tail = head;
        if(head==NULL){
            return;
        }
        while(tail->next!=head){
            tail = tail->next;
        }
        head = head->next;
        tail->next = head;
        free(temp);
     }
     void delete_at_end(){
        if(head==NULL){
            return;
        }
        node *tail = head;
        while(tail->next->next!=head){
            tail = tail->next;
        }
        node *temp = tail->next;
        tail->next = head;
        free(temp);
     }
};
int main(){
  circular_LL ll;
  ll.insertion_at_start(3);
  ll.display();
  ll.insertion_at_start(2);
  ll.display();
  ll.insertion_at_start(1);
  ll.display();
  //ll.printCircular();
  ll.insertion_at_end(4);
  ll.display();
  ll.insertion_at_end(5);
  ll.display();
  ll.delete_at_start();
  ll.display();
  ll.delete_at_end();
  ll.display();
}