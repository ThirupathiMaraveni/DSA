/* Structrue of Binary Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int height(Node* root) {
        // code here
        
            if (root == nullptr) return -1; // or -1 for edge count
            int leftHeight = height(root->left);
            int rightHeight = height(root->right);
            return 1 + max(leftHeight, rightHeight);
        

    }
};