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
void insertAtPosition(Node* &tail,Node* &head, int position, int d){

    //Starting Case
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }
  
    Node* temp= head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //End Case
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
