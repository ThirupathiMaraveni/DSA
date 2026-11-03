/* Structure of a Binary Search Tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
}; */

class Solution {
  public:
  Node* findMin(Node* root){
         while(root && root ->left)
             root=root->left;
         return root;
     }
    Node* delNode(Node* root, int X) {
        // code here
        if(!root)
                   return nullptr;


               if(root->data < X){
                   root->right =delNode(root->right , X);
               }
               else if(root->data > X){
                   root->left = delNode(root->left, X);
               } 
               else{
                   if( !root->left && !root->right ){   //no child 
                       Node* delNode = root;
                       delete delNode;
                       return nullptr;
                   }   
                   else if(!root->left || !root->right){ // single child 
                       Node* child = root->left ? root->left :root->right;
                       delete root;
                       return child;
                   }
                   else{
                       Node* successor=findMin(root->right);
                       root->data= successor->data;
                       root->right =delNode(root->right, successor->data);
                   } 

               }
               return root;
        
    }
};