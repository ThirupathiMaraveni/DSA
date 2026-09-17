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
    temp->next = Head;
    Head = temp;
}

void insertTail(Node *&tail, int d) {
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void count(Node *head) {
    int count = 0;
    Node *temp = head;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    cout << "Number of nodes: " << count << endl;
}

void display(Node *head) {
    Node *temp = head;
    int i = 1;
    while(temp != NULL) {
        cout << "Nodes are "<< i << ": " << temp->data << endl;
        temp = temp->next;
        i++;
    }
    
}
void insertPosition(Node *&head, int pos, int d) {
    if (pos == 1) {
        insertHead(head, d);
        return;
    }

    Node *temp = head;
    int i = 1;
    while (i < pos - 1 && temp != NULL) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL) {
        cout << "Position out of range!" << endl;
        return;
    }

    Node *newNode = new Node(d);
    newNode->next = temp->next;
    temp->next = newNode;
}


void deletePosition1(Node* &head,int pos){

    Node* curr = head;
    if(pos == 1){
        head = head -> next;
        delete curr;
        // return;
    }

    int i=1;
    while(i< pos - 1 && curr -> next != NULL){
        curr = curr -> next;
        i++;
    }

    Node* temp = curr -> next;

    if(curr -> next == NULL){
        return;
    }

    curr -> next = temp -> next;
    delete temp;

}


void deletePosition2(Node* &head,int pos){

    Node *curr = head;
    if(pos == 1){
        head = head -> next;
        delete curr;
        return;

    }

    int i = 1;

    Node *prev;
    while(i < pos && curr -> next != NULL){
        prev = curr;
        curr = curr -> next;
        i++;
    }

    if(curr -> next == NULL){
        return;
    }

    prev -> next = curr -> next;
    delete curr;


}




int main() {
    Node *node = new Node(10);
    Node *head = node;
    Node *tail = node;

    insertHead(head, 20);
    insertTail(tail, 30);

    
    int pos,data;
    cout<<"Enter the position and data to insert: ";
    cin>>pos>>data;
    insertPosition(head,pos,data);
    
    count(head);
    display(head);
    int p;
    cout<<"Enter the position to delete: ";
    cin >> p;

    int dpos;
    cout<<"Enter method to delete: 1 for method 1, 2 for method 2: ";
    cin >> dpos;
    if(dpos == 1)
        deletePosition1(head,p);
    else if(dpos == 2)
        deletePosition2(head,p);
    
    display(head);

    cout<<"The head is: "<<head->data<<endl;
    cout<<"The tail is: "<<tail->data<<endl;
    return 0;

}
