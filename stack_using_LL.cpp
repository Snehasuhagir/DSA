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
class stack{
    node *head;
    int curr_size;
    int capacity;

    public:
      stack(int c){
        capacity = c;
        curr_size = 0;
        head = NULL;
      }

      bool isEmpty(){
        return head = NULL;
      }

      bool isFull(){
        return curr_size = capacity;
      }
      void push(int val){
        if(curr_size==capacity){
            cout<<"Overflow"<<endl;
            return ;
        }
        node *new_node = new node(val);
        new_node->next = head;
        head = new_node;
        curr_size++;
      }
      int pop(){
        if(head==NULL){
            cout<<"Underflow"<<endl;
            return INT_MIN;
        }
        node *new_head = head->next;
        head->next = NULL;
        node *toberemoved = head;
        int result =  toberemoved->val;
        delete toberemoved;
        head = new_head;
        return result;
      }
      int get_top(){
        if(head==NULL){
            cout<<"Underflow"<<endl;
            return INT_MIN;
        }
        return head->val;
      }
      int size(){
        return curr_size;
      }
};
int main(){
   stack st(3);
   st.push(5);
   st.push(4);
   st.push(3);
   cout<<st.get_top()<<endl;
   st.pop();
   cout<<st.get_top()<<endl;
   st.push(2);
   
   cout<<st.get_top()<<endl;
   cout<<st.size()<<endl;
   
}