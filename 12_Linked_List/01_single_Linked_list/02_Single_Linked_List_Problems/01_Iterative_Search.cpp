
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
//Important logic building concept
~Node(){
    
    if(next!=NULL){
        delete next;     //delete that memory  or node which is pointed by next ptr
        next = NULL;
    }
}
};
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head = NULL;
        tail = NULL;
    }
    // deleting the list
   ~List(){
   
    if(head!=NULL){
        delete head;      //delete that memeory which is pointing by head ptr
        head = NULL;
    }
   }
    // push Front function

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

    // print Data
    void printList(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" --> ";
        temp=temp->next;
    }cout<<"NULL";
    }

// linear search
int searchItr(int key){
    Node* temp = head;
    int idx = 0;
    while(temp != NULL){
        if(temp->data==key){
            return idx;
        }
        temp = temp->next;
        idx++;
    }
    return -1;
}
};
int main(){
    List l1;
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    int key = 3;
   cout<<l1.searchItr(key)<<endl;
  l1.printList();
 
    return 0;
}