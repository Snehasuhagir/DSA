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

void inorder(node* root,int &count){
   //base case
   if(root == NULL){
    return;
   }

   inorder(root->left,count);
   if(root->left==NULL && root->right == NULL){
    count++;
   }
   inorder(root->right,count);
  
}
int no_of_leaf(node* root){
    int count = 0;
    inorder(root,count);
    return count;
}

int main(){
    node* root = NULL;

    //creating a tree
    root =  builTree(root);
    //level order traversal
    //
    
    int count = 0;
    
    cout<<"no of leaf is : "<<no_of_leaf(root);
    
    
   
}