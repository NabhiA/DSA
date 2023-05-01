#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    


};
void insertAtHead(Node* &head, int d){
    Node* temp= new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp= new Node(d);
    tail->next=temp;
    tail= temp;
}

