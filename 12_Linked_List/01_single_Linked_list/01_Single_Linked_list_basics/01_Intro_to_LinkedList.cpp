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
//     cout<<"~Node destructor for "<<data<<"\n";
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
//     cout<<"~List dest"<<endl;;
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

//     // push_back function
//     void push_back(int val){
//         Node* newNode = new Node(val);

//         if(head ==NULL){
//             head = tail = newNode;

//         }else{
//             tail->next = newNode;
//             tail = newNode;
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
// //    inserting at middle
// void insert(int val, int pos){
//     Node* newNode = new Node(val);
//     Node*temp = head;
//   for(int i = 0; i<pos-1; i++){
//     // corner case (optional)
//     if(temp==NULL){
//         cout<<"invalid position";
//         return;
//     }
//      temp=temp->next;
//   }
//   newNode->next=temp->next;
//   temp->next = newNode;
// }

// void pop_front(){
//     if(head==NULL){
//         cout<<"LL is empty"<<endl;
//         return;
//     }
//     Node* temp = head;
//     head= head->next;
//     temp->next = NULL;  //to break the connection
//     delete temp;
// }
// // pop back
// void pop_back(){

//  if(head==tail){
//     delete head;
//     head=tail = NULL;
//     return;
//  }
//     Node* temp = head;
//     while(temp->next!=tail){
//         temp=temp->next;
//     }
//     temp->next = NULL;
//     delete tail;
//     tail = temp;
// }


// };
// int main(){
//     List l1;
//     l1.push_front(3);
//     l1.push_front(2);
//     l1.push_front(1);
//   l1.printList();
//   l1.insert(100, 2);
//   l1.printList();
//   l1.pop_front();
//   l1.printList();
//     return 0;
// }
