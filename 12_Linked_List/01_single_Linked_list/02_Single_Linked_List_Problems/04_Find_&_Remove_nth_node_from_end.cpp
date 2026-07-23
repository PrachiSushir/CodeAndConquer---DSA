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
    void printList(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" --> ";
        temp=temp->next;
    }cout<<"NULL"<<endl;
    }
    int getSize(){
        int size = 0;
        Node* temp = head;
        while(temp != NULL){
            temp = temp->next;
            size++;
        }
        return size;
    }
   void removeNthNode(int n){
    int size = getSize();
    Node* prev = head;

    for(int i = 1; i<(size-n); i++){
        prev = prev->next;     //basically every ith iteration prev is already in i+1 position so loop i<n-1 works correct

    }
    Node* toDel = prev->next;
    cout<<"going to delete : "<<toDel->data<<endl;
    prev->next = prev->next->next;

   }
};
int main(){
    List l1;
    l1.push_front(5);
    l1.push_front(4);
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    l1.printList();
    int n = 2;
   l1.removeNthNode(n);
l1.printList();
    return 0;
}

// //TC : O(n);
// //SC : O(1);



