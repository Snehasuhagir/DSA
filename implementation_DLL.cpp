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
};
int main(){
  node *new_node = new node(6);
  doubly_LL ll;
  ll.head = new_node;
  ll.tail = new_node;
  cout<<ll.head->val;
}