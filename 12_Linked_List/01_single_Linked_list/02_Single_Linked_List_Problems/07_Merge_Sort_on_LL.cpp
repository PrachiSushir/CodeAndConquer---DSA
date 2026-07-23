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
    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;

        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void printList(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"-->";
            temp=temp->next;
        }  cout<<"NULL";
    }
 
 
Node* splitAtMid(Node* head){    //2
  Node* slow = head;
  Node* fast = head;
  Node* prev = NULL;
  while(fast != NULL && fast->next != NULL){
   prev = slow;
   slow = slow->next;
   fast = fast->next->next;
  }
   if(prev != NULL){      //special check for single node
    prev->next = NULL;  //split
  } 

  return slow;   //righthead
 
   }
   Node* merge(Node* left, Node* right){   //3
    List ans;
    Node* i = left;
    Node* j = right;
    while(i !=NULL && j!= NULL){
        if(i->data <= j->data){
            ans.push_back(i->data);
            i = i->next;
        }else{
            ans.push_back(j->data);
            j = j->next;
        }
    }
    while(i != NULL){
        ans.push_back(i->data);
        i = i->next;
    }
     while(j != NULL){
        ans.push_back(j->data);
        j = j->next;
    }
    return ans.head;
   }
   
Node* mergeSort(Node* head){    //1
    // basecase
    if(head==NULL || head->next == NULL){
     return head;
    }
    Node* rightHead = splitAtMid(head);
   Node* left =  mergeSort(head);  //left head
   Node* right =  mergeSort(rightHead); //leftHead

   return merge(left, right);  // returns head of sorted LL

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
    l1.head =l1.mergeSort(l1.head);
   
    l1.printList();
    return 0;
}