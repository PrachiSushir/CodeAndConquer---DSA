// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int val){
//    data = val;
//    next = NULL;
//     }
// };
// class List{
//     public:
//     Node* head;
//     Node* tail;

//     List(){
//         head = NULL;
//        tail = NULL;
//     }

//   void push_front(int val){
//    Node* newNode = new Node(val);
//    if(head == NULL){
//    head = tail = newNode;
//    }else{
//     newNode->next = head;
//     head = newNode;
//    }
//     }
//     void printList(){
//         Node* temp = head;
//         while(temp!=NULL){
//             cout<<temp->data<<"-->";
//             temp=temp->next;
//         }  cout<<"NULL";
//     }
// // detect cycle
//     void removeCycle(Node* head){
//         // detect cycle
//         Node* fast = head;
//         Node* slow = head;
//         bool isCycle = false;
       
//     while(fast!=NULL && fast->next!=NULL){
//         slow = slow->next;
//         fast = fast->next->next;
//         if(slow==fast){
//             cout<<"Cycle exist"<<endl;
//             isCycle = true;
//             break;
//         }
//     }
//     if(!isCycle){
//   cout<<"Cycle doesn't exist"<<endl;
//   return;
//     }
//     slow = head;
//     if(slow==fast){ //special case : tail ->head   Ex. 1->2->3->4->1
//         while(fast->next != slow){
//             fast = fast->next;
//         }
//         fast ->next = NULL;  //remove cycle
//         return;
//}else{
//         Node* prev = fast;
//         while(slow!=fast){
//        slow = slow->next;
//        prev = fast;
//        fast = fast->next;
//         }
//        prev->next = NULL;  //remove cycle
//     }
   
//     }
// };
// int main(){
//     List l1;
//     l1.push_front(5);
//     l1.push_front(4);
//     l1.push_front(3);
//     l1.push_front(2);
//     l1.push_front(1);
//     l1.tail->next = l1.head;
//     l1.removeCycle(l1.head);
//     l1.printList();
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
// detect cycle
    void removeCycle(Node* head){
        // detect cycle
        Node* fast = head;
        Node* slow = head;
        bool isCycle = false;
       
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast==slow){
            cout<<"Cycle exist"<<endl;
            isCycle = true;
            break;
        }
    }
    if(!isCycle){
  cout<<"Cycle doesn't exist"<<endl;
  return;
    }
    slow = head;
    if(slow==fast){ //special case : tail ->head   Ex. 1->2->3->4->1
        while(slow->next != fast){
            slow = slow->next;
        }
        slow ->next = NULL;  //remove cycle


    }else{
        Node* prev = fast;
        while(slow!=fast){
       slow = slow->next;
       prev = fast;
       fast = fast->next;
        }
       prev->next = NULL;  //remove cycle
    }
   
    }
};
int main(){
    List l1;
    l1.push_front(5);
    l1.push_front(4);
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    l1.tail->next = l1.head;
    l1.removeCycle(l1.head);
    l1.printList();
    return 0;
}