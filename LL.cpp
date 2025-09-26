#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node*next;

    //default constructor define:::
    Node(int data){
        this ->data=data;
        this ->next= NULL;
    }

   
};

void Insertathead (Node* &head, int d){
if(head== NULL){
    Node*temp = new Node(d);
    head= temp;
}

else {
    //create new node
    Node* temp = new Node(d);
    temp ->next = head;
    head = temp;

}
}

void Insertattail(Node* &head, Node* &tail, int d){
    if(head == NULL){
    Node*temp = new Node(d);
    tail= temp;
    head = temp;
}

else {
      Node* temp = new Node(d);
      tail ->next = temp;
      tail = temp;
}
}
 int getlength(Node* &head){
    Node*temp = head;
    int len =0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}


void insertp(Node* &head, Node* &tail, int p, int d){
    if(head==NULL){
        Node*temp= new Node(d);
        head= temp;
        tail=temp;
    }
    if (p<1){
        cout<<" Please enter correct position: "<<endl;
    }
    int len = getlength(head);
    if(p>len){
        cout<<"Please enter correct Position: "<<endl;
        return;
    }
    if (p==1){
        Insertathead(head,d);
    }

    else if (p==len){
        Insertattail(head, tail, d);
    }
    else{
        Node*temp=head;
    Node* nodetoinsert = new Node(d);
     nodetoinsert ->next = temp ->next;
     temp -> next = nodetoinsert;
     
    
    }

}

void print(Node* &head){
        Node* temp= head;
    while(temp!=NULL){
        cout<< temp->data <<" ";
        temp=temp ->next;
    }
    cout<<endl;

}

int main(){
    Node*node1= new Node(10);
    Node*node2= new Node(11);
    Node*node3= new Node(12);
    Node*node4= new Node(13);
    node1 ->next = node2;
    node2 ->next = node3;
    node3 ->next = node4;
    node4 ->next = NULL;
   // cout<< node1 ->data<<endl;
   // cout<< node1 ->next<<endl;
   Node* head = node1;
   Node*tail= node4;
  // Node* tail = node1;
   // print(head);

  //  Insertathead(head, 13);
  // print(head);

   // Insertattail(head, tail, 12);
   // print(head);
   insertp(head,tail,4, 14);
   print(head);
return 0;

}