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
void insertionathead(node *&head,int val){
    node *new_node = new node(val);
    new_node->next = head;
    head = new_node;
}
void display(node *head){
    node *temp = head;

    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node *head = NULL;
    insertionathead(head,2);
    display(head);
    insertionathead(head,4);
    display(head);
}

