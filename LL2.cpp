#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    //constructor
    Node(int d){
        this ->data= d;
        this ->next= NULL;
        this ->prev= NULL;
    }

};

void print(Node* head){
    Node*temp = head;
    while(temp != NULL){
        cout<<temp ->data<< " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int getlen(Node* head){
    int cnt =0;
    Node*temp =head;
       while(temp != NULL){
        cnt++;
        temp = temp -> next;
    }
    return cnt;
}

void insertathead( Node* &head, int d){
    Node*temp = new Node(d);
    temp ->next = head;
    head ->prev = temp;
    head = temp;

}

void insertattail(Node* tail, int d){
    Node*temp = new Node(d);
    tail ->next = temp;
    temp ->prev = tail;
    temp ->next = NULL;
    tail = temp;
}

void insertatposition( Node* &head, Node* &tail, int position, int d){
    Node* nodetoinsert =new Node(d);
    Node* temp = head;
    Node* temp2= tail;
     nodetoinsert -> next = temp2;
     temp2 -> prev = nodetoinsert;
     temp ->next = nodetoinsert;
     nodetoinsert -> prev = temp;
}

int main (){
    Node* node1 = new Node(10);
    Node*head= node1;
    Node*tail= node1;
    print(head);
    cout<<getlen(head)<<endl;
    insertathead(head, 11);
    print(head);
    insertattail(tail, 13);
    print(head);
    insertatposition(head, tail, 2, 12);
    print(head);

    return 0;
}