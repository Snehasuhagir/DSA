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
    
};
int main(){
  
  doubly_LL ll;
  ll.insert_at_start(1);
  ll.display();
  ll.insert_at_start(2);
  ll.display();
  ll.insert_at_start(3);
  
  ll.display();
  
}