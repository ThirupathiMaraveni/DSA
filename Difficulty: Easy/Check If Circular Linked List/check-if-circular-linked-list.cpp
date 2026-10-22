/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    bool isCircular(Node *head) {
        // code here
        Node * slow = head;
        Node * fast = head;
        
        while(fast != NULL && fast -> next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
            
            if(slow == fast){
                return true;
            }
              
            
        }
            return false;
        // return false;
    }
};