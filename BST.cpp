#include<iostream>
#include<queue>
using namespace std;
class node{
 public:
   int data;
   node* left;
   node* right;
     node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
     }
};
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
node* minvalue(node* root){
   node* temp = root;

   while(temp->left != NULL){
      temp = temp->left;
   }
    return temp;
}

node* maxvalue(node* root){
   node* temp = root;

   while(temp->right != NULL){
      temp = temp->right;
   }
    return temp;
}
node* predecessor(node* root,int k){
   node* temp = root;
   while(temp->left->data != k){
      temp = temp->left;
   }
   return temp;

   while(temp->right->data != k){
      temp = temp->right;
   }
   return temp;
}
node* successor(node* root,int k){
   node* temp = root;
   while(temp->data != k){
      temp = temp->left;
   }
   return temp->left;

   while(temp->data != k){
      temp = temp->right;
   }
   return temp->right;
}
node* deleteFromBst(node* root,int k){
   //base case
   if(root == NULL){
      return root;
   }
  if(root->data == k){
   //0 child
   if(root->left == NULL && root->right == NULL){
      delete root;
      return NULL;
   }

   //1 child
   //left child present 
   if(root->left != NULL && root->right == NULL){
      node* temp = root->left;
      delete root;
      return temp;
   }
   //right child present
   if(root->left == NULL && root->right != NULL){
      node* temp = root->right;
      delete root;
      return temp;
   }
  
 


   //2 child
   if(root->left != NULL && root->right != NULL){
      int mini = minvalue(root->right)->data;
      root->data = mini;
      root->right = deleteFromBst(root->right,mini);
      return root;
   }
  }
    else if(root->data > k){
     //left part me jao
     root->left = deleteFromBst(root->left,k);
     return root;
  }
  else{
   //right part me jao
     root->right = deleteFromBst(root->right,k);
     return root;
  }
}
node* insertIntoBST(node* root,int data){
    //base case
    if(root == NULL){
        root = new node(data);
        return root;
    }

    if(data > root->data){
        //right part me insert krna h
        root->right = insertIntoBST(root->right,data);
    }
    else{
        //left part me insert krna h
        root->left = insertIntoBST(root->left,data);
    }
    return root;
}
  void takeinput(node* &root){
    int data;
    cin>>data;

    while(data != -1){
        root = insertIntoBST(root,data);
        cin>>data;
    }
  }
int main(){
   node* root = NULL;

   cout<<"enter data to create BST"<<endl;
   takeinput(root);

   cout<<"printing the BST"<<endl;
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

    cout<<"min value is : "<<minvalue(root)->data<<endl;
    cout<<"max value is : "<<maxvalue(root)->data<<endl;
   // cout<<"predecessor of 4 is : "<<predecessor(root,4)->data<<endl;
   // cout<<"successor of 4 is : "<<successor(root,4)->data<<endl;
    deleteFromBst(root,50);
    cout<<"printing the BST"<<endl;
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

    cout<<"min value is : "<<minvalue(root)->data<<endl;
    cout<<"max value is : "<<maxvalue(root)->data<<endl;
}
    
