#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }

    ~Node(){
        if(next!=NULL){
         delete next;
         next = NULL;
        }
        
    }
};
class List{
    public:
    Node* head;
    Node* tail;
    List(){
        
        head = NULL;
        tail = NULL;
    }
    ~List(){
        if(head!=NULL){
            delete head;
            head=NULL;
        }
    }
    void push_front(int val){
        Node* newNode = new Node(val);   //dynamic
        if(head==NULL){
            head=tail=newNode;

        }
        else{
            newNode->next = head;
            head = newNode;
        }

    }
    void reverse(){
        Node* curr = head;
        Node* prev = NULL;
        while(curr!=NULL){
            Node* next = curr->next;
            curr->next = prev;

            // update for next
            prev = curr;     
            curr=next;
        }
        head = prev;

    }
     void printList(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" --> ";
        temp=temp->next;
    }cout<<"NULL"<<endl;
    }
};
int main(){
    List l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_front(4);
    l1.push_front(5);
    l1.printList();
    l1.reverse();
  l1.printList();
    return 0;
}


