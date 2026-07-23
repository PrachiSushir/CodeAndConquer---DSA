

// //1.-------> Creat a stack using a Linked List(using list from STL)
// #include<iostream>
// #include<list>
// using namespace std;
// template<class T>
// class Stack{
//   list<T>ll;

//   public:
//   void push(T val){
//     ll.push_front(val);

//   }

//   void pop(){
//     ll.pop_front();

//   }
//   T top(){
//     return ll.front();

//   }
//   bool isEmpty(){
//     return ll.size() == 0;
//   }


// };
// int main(){
// Stack<int>s;
// s.push(3);
// s.push(2);
// s.push(1);
// s.push(0);

// while(!s.isEmpty()){
//   cout<<s.top()<<" "; 
//   s.pop();
// }
// cout<<endl;

//   return 0;
// }

// // //2.---------> Creat a stack using a Linked List (creating custom LL)

// #include<iostream>
// using namespace std;
// template<class T>

// class Node{
//    public:
//   T data;
//   Node* next;
 
//   Node(T val){
//     data = val;
//     next = NULL;
//   }
// };

// template<class T>

// class Stack{
// Node<T>* head;

// public:

// Stack(){
//   head = NULL;
// }
// void push(T val){
//   Node<T>* newNode = new Node<T>(val);
//   if(head==NULL){
//     head = newNode;

//   }else{
//     newNode->next = head;
//     head = newNode;
//   }
// }

// void pop(){
//   Node<T>* temp = head;
//   head= head->next;
//   temp->next = NULL;
//   delete temp;      //deleting the node

// }

// T top(){
//   return head->data;
// }

// bool isEmpty(){
//   return head == NULL;
// }
// };
// int main(){
// Stack<int>s;
// s.push(3);
// s.push(2);
// s.push(1);

// while(!s.isEmpty()){
//   cout<<s.top()<<" ";
//   s.pop();
// }cout<<endl;
//   return 0;
// }