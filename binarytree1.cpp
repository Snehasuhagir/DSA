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
void inorder(node* root){
   //base case
   if(root == NULL){
      return;
   }

   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);

}

void preorder(node* root){
   //base case
   if(root == NULL){
      return;
   }
   cout<<root->data<<" ";
   preorder(root->left);
   preorder(root->right);

}

void postorder(node* root){
   //base case
   if(root == NULL){
      return;
   }
   
   postorder(root->left);
   postorder(root->right);
   cout<<root->data<<" ";

}
int main(){
    node* root = NULL;

    //creating a tree
    root =  builTree(root);
    //level order traversal
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"printing the level order taversal output "<<endl;
    levelOrderTraversal(root);
   
    
    cout<<"inorder traversal is : ";
    inorder(root);
    cout<<endl;
    
    cout<<"preorder traversal is : ";
    preorder(root);
    cout<<endl;
    
    cout<<"postorder traversal is : ";
    postorder(root);
    cout<<endl;
}