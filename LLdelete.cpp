#include<iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){

    }
};

void delbeg(Node* &head, Node* &tail, int data){
    Node* temp = head;
    head = head->next;
    delete temp;
}

void delend(Node* &head, Node* &tail, int data){
    Node*temp = tail;
    
}
   

void print(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1= new Node(10);
    Node* node2= new Node(20);
    Node* node3= new Node(30);
    Node* node4= new Node(40);
    Node* node5= new Node(50);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    Node* head = node1;
    Node* tail = node5;

    print(head);
    delbeg(head, tail, 10);
    print(head);

}
