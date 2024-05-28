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
void insertatend(node *&head,int val){
    node *new_node = new node(val);
    
    node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}
void insertatpos(node *&head,int val,int pos){
    node *new_node = new node(val);

    if(pos==0){
        insertionathead(head,val);
        return;
    }
    

    node *temp = head;
    int current_pos = 0;
    while(current_pos!=pos-1){
        temp = temp->next;
        current_pos++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}
void updateatkpos(node *&head,int val,int k){

    node *temp = head;
    int current_pos = 0;
    while(current_pos!=k){
        temp = temp->next;
        current_pos++;
    }
    temp->val = val;
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
    insertionathead(head,1);
    display(head);
    insertatend(head,3);
    display(head);
    insertatpos(head,5,0);
    display(head);
    updateatkpos(head,6,1);
    display(head);
}

