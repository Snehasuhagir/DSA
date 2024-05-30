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
    
    void delete_same(node *&head,node *&tail){

        node *curr_node = tail->prev;

        while(curr_node!=head){
            node *prev_node = curr_node->prev;
            node *next_node = curr_node->next;
            if(prev_node->val==next_node->val){
                curr_node->prev->next = curr_node->next;
                curr_node->next->prev = curr_node->prev;
                free(curr_node);
            } 
            curr_node = prev_node;
        } 
    }
};
int main(){
  
  doubly_LL ll;
  ll.insert_at_end(2);
  ll.insert_at_end(1);
  ll.insert_at_end(1);
  ll.insert_at_end(2);
  ll.insert_at_end(1);
  
  ll.display();
  ll.delete_same(ll.head,ll.tail);
  ll.display();
}