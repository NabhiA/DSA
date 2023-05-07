#include <iostream>
#include <map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //destructor
    ~Node(){
        int value= this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for data: "<<value<<endl;
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

void deleteNode(Node* &head,int position){
    if(position==1){

        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

    }
    else{
        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

void print(Node* &head){

    if(head==NULL){
        cout<<"empty";
        return;
    }
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

bool isCircularList(Node* head){
    if(head==NULL){
        return 1;
    }
    
    Node* temp=head -> next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }

    if(temp==head){
        return 1;
    }
    
    return 0;
}

bool detectLoop(Node* head){
    if(head==NULL){
        return false;
    }

    map<Node*,bool> visited;

    Node* temp=head;
    while(temp!=NULL){
        if(visited[temp] == true){
            cout<<"Cycle present at: "<<temp->data<<endl;
            return 1;
        }
        visited[temp]=true;
        temp=temp->next;
    }
}

Node* floydDetect(Node* head){
    if(head==NULL){
        return NULL;
    }

    Node* slow=head;
    Node* fast=head;

    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            cout<<"Present at: "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    if(head==NULL)
        return NULL;
    
    Node* intersection=floydDetect(head);
    if(intersection==NULL){
        return NULL;
    }
    Node* slow=head;

    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }

    return slow;
}

void removeLoop(Node* head){
    if(head==NULL)
        return;
    Node* startofLoop=getStartingNode(head);
    Node*temp = startofLoop;
    while(temp->next != startofLoop){
        temp=temp->next;
    }
    temp->next=NULL;
}

int main(){

    /*
    Node* node1= NULL;
    Node* head=node1;
    */
    Node* node1= new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    Node* head= node1;
    Node* tail= node1;

    //print(head);

    insertAtTail(tail, 12);
    //print(head);
    //cout<<"12: "<<tail->data<<endl;
    insertAtTail(tail, 15);
    //print(head);
    //cout<<"15: "<<tail->data<<endl;

    // cout<<"15: "<<tail->data<<endl;
    insertAtPosition(tail,head,4,22);
    print(head);
    //cout<<"22: "<<tail->data<<endl;

    /*
    deleteNode(head,3);
    print(head);

    if(isCircularList(head)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    */

    tail->next=head->next;
    //print(head);

    if(floydDetect(head) != NULL){
        cout<<"Cycle is present"<<endl;
    }
    else{
        cout<<"Cycle not present"<<endl;
    }
    Node* loop=getStartingNode(head);
    cout<<"Starting at: "<<loop->data<<endl;

    removeLoop(head);
    print(head);
    
    return 0;

}

