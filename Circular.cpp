#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

void insertHead(Node *&Head, int d) {
    Node *temp = new Node(d);

    if (Head == NULL) {
        Head = temp;
        temp->next = Head;
        return;
    }

    Node *tail = Head;
    while (tail->next != Head) {
        tail = tail->next;
    }

    temp->next = Head;
    tail->next = temp;
    Head = temp;
}

void checkCircular(Node *head) {
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            cout << "The linked list is circular." << endl;
            return;
        }
    }

    cout << "The linked list is not circular." << endl;
}


int main(){
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    Node *Head = NULL;
    for(int i = 0; i < n; i++) {
        int d;
        cout<<"Enter data for node "<<i+1<<": ";
        cin>>d;
        insertHead(Head, d);
    }
    
    checkCircular(Head);
    return 0;
}