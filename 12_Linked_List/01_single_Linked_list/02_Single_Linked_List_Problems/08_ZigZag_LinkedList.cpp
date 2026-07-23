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

    void printList(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"-->";
            temp=temp->next;
        }  cout<<"NULL"<<endl;
    }
    Node* splitAtMid(Node* head){
  Node* slow = head;
  Node* fast = head;
  Node* prev = NULL;
  while(fast != NULL && fast->next != NULL){
   prev = slow;
   slow = slow->next;
   fast = fast->next->next;
  }
   if(prev != NULL){
    prev->next = NULL;  //split
  } return slow;   //righthead
 
   }
    Node* reverse(Node* head){
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }
        return prev;
    }
    Node* zigZagLL(Node* head){
        Node* rightHead = splitAtMid(head);
        Node* rightHeadRev= reverse(rightHead);

        Node* left = head;
        Node* right = rightHeadRev;

        Node* tail = right;

        while(left!=NULL && right != NULL){
        Node* nextLeft = left->next;
        Node* nextRight = right->next;
        left->next = right;
        right->next = nextLeft;

        tail = right;

        left = nextLeft;
        right = nextRight;
        }
        if(right !=NULL){   //for an odd number of LL
            tail->next = right;
        }
        return head;
       
        
    }
 
};

int main(){
 List l1;
    l1.push_front(5);
    l1.push_front(4);
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);

    l1.printList(l1.head);
    l1.head = l1.zigZagLL(l1.head);
    l1.printList(l1.head);
    return 0;
}