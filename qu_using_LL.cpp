#include<iostream>
using namespace std;
class node{
    public:
      int data;
      node *next;
        node(int val){
            data = val;
            next = NULL;
        }    
};
class queue{
   node *head;
   node *tail;
   int size;
public:
   queue(){
    head = NULL;
    tail = NULL;
    size = 0;
   }

   void enqueue(int val){
    node *new_node = new node(val);
    if(head==NULL){
        head = tail = new_node;
    }
    else{
        tail->next = new_node;
        tail = new_node;
    }
    size++;
   }

   void dequeue(){
    if(head==NULL){
        return;
    }
    else{
    node *old_head = head;
    node *new_head = head->next;
    head = new_head;
    if(head==NULL) tail = NULL;
    old_head->next = NULL;
    delete old_head;
    size--;
    }
   }
   int get_size(){
    return size;
   }

   int front(){
    if(head == NULL) return -1;
    return head->data;
   }

   bool isEmpty(){
    return head == NULL;
   }
};
int main(){
  queue qu;
  qu.enqueue(10);
  qu.enqueue(20);
  qu.enqueue(30);
  qu.dequeue();
  qu.enqueue(40);
  while(!qu.isEmpty()){
    cout<<qu.front()<<" ";
    qu.dequeue();
  }
}