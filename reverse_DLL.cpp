#include<iostream>
using namespace std;
class node{
public:
   int val;
   node *prev;
   node *next;

   node(int data){
     val = data;
     prev = NULL;
     next = NULL;
   }
};
class doubly_LL{
    public:
    node *head ;
    node *tail ;

    doubly_LL(){
        head = NULL;
        tail = NULL;
    }
    void display(){
        node *temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
        
    }
    void insert_at_start(int k){
        node *new_node = new node(k);
        node *temp = head;
        if(head==NULL){
         head = new_node;
         tail = new_node;
         return;
        }

        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
    }

    void insert_at_end(int k){
        node *new_node = new node(k);
        if(tail==NULL){
            head = new_node;
            tail = new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return;
    }
    void insert_at_Pos(int k,int pos){
        node *new_node = new node(k);
        node *temp = head;
        int count = 1;
        while(count<(pos-1)){
          temp= temp->next;
          count++;
        }
        new_node->next = temp->next;
        temp->next = new_node;

        new_node->prev = temp;
        new_node->next->prev = new_node;
      
        return;
    }
    void delete_at_start(){

        if(head==NULL){
            return;
        }

        node *temp = head;
        head = head->next;
        if(head==NULL){
            tail = NULL;
        }
        else{
            head->prev = NULL;
        }
        free(temp);
        return;
    }
    void delete_at_end(){
        if(tail==NULL){
            return;
        }

        node *temp = tail;
        tail = tail->prev;
        if(tail==NULL){
            head=NULL;
        }
        else{
            tail->next = NULL;
        }
        free(temp);
        return;
    }
    void delete_at_pos(int pos){
        node *temp = head;
        int count =1;
        while(count<pos){
            temp = temp->next;
            count++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
        return ; 
    }

    void reverseDLL(node *&head,node *&tail){
        node *curr = head;

        while(curr){
            node *nextptr = curr->next;
            curr->next = curr->prev;
            curr->prev = nextptr;
            curr = nextptr;
        }
        node *new_head = tail;
        tail = head;
        head = new_head;
        
    }
};
int main(){
  
  doubly_LL ll;
 // ll.insert_at_start(1);
 // ll.display();
 // ll.insert_at_start(2);
 // ll.display();
 // ll.insert_at_start(3);
 // ll.display();
  ll.insert_at_end(1);
  ll.display();
  ll.insert_at_end(2);
  ll.display();
  ll.insert_at_end(3);
  ll.display();
  ll.insert_at_end(4);
  ll.display();
  //ll.insert_at_Pos(5,3);
  // ll.display();
  //ll.delete_at_start();
  //ll.display();
  //ll.delete_at_end();
  //ll.display();
  //ll.delete_at_pos(3);
  //ll.display();
  ll.reverseDLL(ll.head,ll.tail);
  ll.display();
}