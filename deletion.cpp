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
void deleteathead(node *&head){
    node *temp = head;
    head = head->next;
    free(temp);
}
void deleteattail(node *&head){
    node *second_last = head;
    while(second_last->next->next!=NULL){
    second_last = second_last->next;
}
  node *temp = second_last->next;
  second_last->next = NULL;
  free(temp);
}
void deleteatpos(node *&head,int pos){
    if(pos==0){
        deleteathead(head);
        return;
    }
    node *prev = head;
    int curr_pos = 0;
    while(curr_pos!=pos-1){
        prev = prev->next;
        curr_pos++;
    }
    node *temp = prev->next;
    prev->next = prev->next->next;
    free(temp);
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
   // deleteathead(head);
    //display(head);
    //deleteattail(head);
    //display(head);
    deleteatpos(head,2);
    display(head);
}

