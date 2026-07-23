
// #include<iostream>
// using namespace std;
// class Node{
// public:
// int data;
// Node* next;

// Node(int val){
//     data = val;
//     next = NULL;
// }
// ~Node(){
    
//     if(next!=NULL){
//         delete next;
//         next = NULL;
//     }
// }
// };
// class List{
//     Node* head;
//     Node* tail;
//     public:
//     List(){
//         head = NULL;
//         tail = NULL;
//     }
//     // deleting the list
//    ~List(){
   
//     if(head!=NULL){
//         delete head;
//         head = NULL;
//     }
//    }
//     // push Front function

//     void push_front(int val){
//         Node* newNode = new Node(val);   //dynamic
//         if(head==NULL){
//             head=tail=newNode;

//         }
//         else{
//             newNode->next = head;
//             head = newNode;
//         }

//     }

//     // print Data
//     void printList(){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" --> ";
//         temp=temp->next;
//     }cout<<"NULL";
//     }

// // Recursive Search
// int helper(Node* temp, int key){
//     // target is serched in whole ll
//     if(temp == NULL){
//         return -1;
//     }
//     // search on head
//     if(temp->data == key){
//         return 0;
//     }

//     int idx = helper(temp->next, key);
//     if(idx == -1){
//         return -1;
//     }
//     return idx+1;
// }
// int searchRec(int key){
//    return helper(head, key);
// }
// };
// int main(){
//     List l1;
//     l1.push_front(3);
//     l1.push_front(2);
//     l1.push_front(1);
//     int key = 3;
//    cout<<l1.searchRec(key)<<endl;
//   l1.printList();
 
//     return 0;
// }



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
    // deleting the list
   ~List(){
   
    if(head!=NULL){
        delete head;
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

// Recursive Search
int searchRec(Node* temp, int key){
    if(temp ==NULL){
        return -1;
    }
    if(temp->data == key){
        return 0;
    }

    int idx = searchRec(temp->next, key);

    if(idx==-1){
        return -1;
    }
return idx+1;
}

};
int main(){
    List l1;
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
 
    int key = 3;
   cout<<l1.searchRec( l1.head, key)<<endl;
  l1.printList();
 
    return 0;
}