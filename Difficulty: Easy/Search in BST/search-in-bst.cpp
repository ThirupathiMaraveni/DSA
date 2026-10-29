/* Definition for Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool search(Node* root, int key) {
        // code here
         bool value;
         
        if(root == NULL){
            return false;
        }
        if(key == root->data){
            return true;
        }
        
        if(key < root -> data){
             value = search(root->left, key);
        }
        
        else{
             value = search(root -> right,key);
        }
        return value;
    }
};