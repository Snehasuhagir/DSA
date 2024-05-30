#include<iostream>
#include<vector>
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
    
    vector <int> target_sum(node *head,node *tail,int x){
    vector <int> ans(2,-1);
    while(head!=tail){
        int sum = head->val + tail->val;
        if(sum==x){
            ans[0] = head->val;
            ans[1] = tail->val;
            return ans;
        }
        if(sum>x){
            tail = tail->prev;
        }
        else{
            head = head->next;
        }
    }
    return ans;
    }
};
int main(){
  
  doubly_LL ll;
  ll.insert_at_end(2);
  ll.insert_at_end(5);
  ll.insert_at_end(6);
  ll.insert_at_end(8);
  ll.insert_at_end(10);
  
  ll.display();
  vector <int> ans = ll.target_sum(ll.head,ll.tail,11);
  cout<<ans[0]<<" "<<ans[1];
}