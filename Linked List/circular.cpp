#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int value= this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for data: "<<value<<endl;
    }
    

};

void insertNode(Node* &tail, int element, int d){
    //assuming element is present in the list .

    //empty list
    if(tail == NULL){
        Node* newNode= new Node(d);
        tail=newNode;
        newNode->next=newNode;

    }

    else{//non empty list 
        Node* curr= tail;
        while(curr->data != element){
            curr = curr->next;
        }

        Node* temp= new Node(d);
        temp->next=curr->next;
        curr->next=temp;

    }
}

void deleteNode(Node* &tail, int value){

    if(tail==NULL){
        cout<<"Please check the list again"<<endl;
        return;
    }

    else{
        //non-empty
        //assuming "value" is present in the list

        Node* prev= tail;
        Node* curr= prev->next;

        while(curr->data != value){
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;

        //1 node LinkedList
        if(curr==prev){
            tail = NULL;
            cout<<"Tail: "<<tail<<endl;
        }

        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;

    }

}

void print(Node* tail){

    Node* temp= tail;

    if(tail == NULL){
        cout<<"List is empty";
        return;
    }

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}

bool isCircularList(Node* head){
    if(head==NULL)
        return 1;
    
    Node* temp=head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }

    if(temp==head)
        return 1;
    
    return false;
}

int main(){

    Node* tail = NULL;
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    insertNode(tail,7,9);
    print(tail);
/*
    insertNode(tail,5,6);
    print(tail);
    insertNode(tail,9,10);
    print(tail);
    insertNode(tail,3,4);
    print(tail);
    deleteNode(tail,3);
    print(tail);
    deleteNode(tail,3);
    print(tail);
*/
    if(isCircularList(tail)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }


    return 0;
}

