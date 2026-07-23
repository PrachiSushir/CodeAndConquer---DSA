// //Implementation using Linked List
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
class Queue{
  Node* head;
  Node* tail;
public:
  Queue(){
    head=tail = NULL;
  }

//   push
void push(int val){     //TC: O(n)
 Node* newNode = new Node(val);
 if(head==NULL){
    head = tail = newNode;
 } else{
 tail->next = newNode;
 tail = newNode;
 }

}
// pop 
void pop(){    //TC: O(n)
    if(empty()){
    cout<<"Queue is empty"<<endl;
    return;
}
Node* temp = head;
head = head->next;
temp->next=NULL;
delete temp;
}

// front      TC: O(n)
int front(){
if(empty()){
    cout<<"Queue is empty"<<endl;
    return -1;
}return head->data;
} 

//  optional
bool empty(){     //TC: O(n)
return head==NULL;
}

};

int main(){
    Queue q;
    q.push(1);
     q.push(2);
     q.push(3);
     while(!q.empty()){
    cout<<q.front()<<endl;
    q.pop();
     }
    return 0;
}

