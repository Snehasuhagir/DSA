#include<iostream>
#include<queue>
using namespace std;
class node{
  public:
    int data;
    node* right;
    node*left;

     node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
     }
};

node* builTree(node* root){
   cout<<"enter the data : "<<endl;
   int data;
   cin>>data;
   root = new node(data);

   if(data==-1){
    return NULL;
   }

   cout<<"enter data for inserting in left of "<<data<<endl;
   root->left = builTree(root->left);

   cout<<"enter data for inserting in right of "<<data<<endl;
   root->right = builTree(root->right);
   return root;
}
void levelOrderTraversal(node* root){
   queue<node*> qu;
   qu.push(root);
   qu.push(NULL);

   while(!qu.empty()){
      node* temp = qu.front();
      qu.pop();
    
      if(temp == NULL){
         //purana level cmplt traverse ho chuka h
         cout<<endl;

         if(!qu.empty()){
            //queue still has some child nodes
            qu.push(NULL);
         }
      }
      else{
         cout<<temp->data<<" ";
         if(temp->left){
         qu.push(temp->left);
      }

      if(temp->right){
         qu.push(temp->right);
      }
      
   }

}
}
void build_from_level_order(node* &root){
    queue<node*> q;
    cout<<"enter data for root"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"enter left node for: "<<temp->data<<endl;
        int leftnode;
        cin>>leftnode;

        if(leftnode != -1){
            temp->left = new node(leftnode);
            q.push(temp->left);
        }

        cout<<"enter right node for: "<<temp->data<<endl;
        int rightnode;
        cin>>rightnode;

        if(rightnode != -1){
            temp->right = new node(rightnode);
            q.push(temp->right);
        }
    }
    
    
    
}

int main(){
    node* root = NULL;
    //1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    build_from_level_order(root);
   levelOrderTraversal(root);
   /* //creating a tree
    root =  builTree(root);
    //level order traversal
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"printing the level order taversal output "<<endl;
    levelOrderTraversal(root);
   */
    
    
}