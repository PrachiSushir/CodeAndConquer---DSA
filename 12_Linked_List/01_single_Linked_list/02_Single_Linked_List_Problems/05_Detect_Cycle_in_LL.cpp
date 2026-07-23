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
};
class List{
    public:
    Node* head;
    Node* tail;

    List(){
        head = NULL;
       tail = NULL;
    }

  void push_front(int val){
   Node* newNode = new Node(val);
   if(head == NULL){
   head = tail = newNode;
   }else{
    newNode->next = head;
    head = newNode;
   }
    }
    void printList(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"-->";
            temp=temp->next;
        }  cout<<"NULL";
    }

    bool isCycle(Node* head){
        Node* fast = head;
        Node* slow = head;
       
    while(fast!=NULL || fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast==slow){
            cout<<"Cycle exist"<<endl;
            return true;
        }
    }
    cout<<"Cycle doesn't exist"<<endl;
    return false;
    }
};
int main(){
    List l1;
    l1.push_front(5);
    l1.push_front(4);
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    // l1.tail->next = l1.head;
    l1.isCycle(l1.head);
    return 0;
}