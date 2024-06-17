#include<iostream>
using namespace std;
template <typename T>
class node{
    public:
      T val;
      node *next;

      node(T data){
       val = data;
       next = NULL;
      }
};
int main(){
   node <int> *node1 = new node<int>(4);
   cout<<node1->val<<endl;
   node <char> *node2 = new node<char>('s');
    cout<<node2->val<<endl;
}