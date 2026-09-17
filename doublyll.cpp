#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int d){
        data = d;
        next = NULL;
        prev = NULL;
    }

};

void insertHead(Node* &head, int d){

    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void insertTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

void insertPosition(Node* &head, int pos, int d){

    Node* curr = head;
    Node *temp = new Node(d);

    if(pos ==1){
        insertHead(head,d);
        return;
    }
    int i=1;
    while(i < pos - 1 && curr -> next != NULL){
        curr = curr -> next;
        i++;
    }

    if(curr -> next == NULL){
        insertTail(curr,d);
        return;
    }

    temp -> next = curr -> next;
    curr -> next -> prev = temp;
    curr -> next = temp;
    temp -> prev = curr;
}

void count(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp -> next;
    }
    cout<<"Number of nodes: "<<count<<endl;
}

void display(Node *head){
    Node *temp = head;
    int i = 1;
    while(temp != NULL){
        cout<<"Nodes are "<<i<<": "<<temp -> data<<endl;
        temp = temp -> next;
        i++;
    }
}

int main(){
    Node *node = new Node(100);
    Node *head = node;
    Node *tail = node;

    int data;
    cout<<"Enter data for Head: ";
    cin>>data;

    insertHead(head,data);
    int dat;
    cout<<"Enter data for Tail: ";
    cin>>dat;
    insertTail(tail,dat);

    int pos,d;
    cout<<"Enter the position and data to insert: ";
    cin>>pos>>d;
    insertPosition(head,pos,d);

    count(head);
    display(head);


}