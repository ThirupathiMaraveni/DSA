/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        // code here
        Node* curr = head;
        
        while(curr != NULL && curr -> next != NULL){
            if(curr -> data == curr -> next -> data){
                Node *temp = curr -> next;
                curr  -> next = curr -> next -> next;
                delete temp;
            }
            else{
                curr = curr -> next;
            }
        }
        return head;
    }
};