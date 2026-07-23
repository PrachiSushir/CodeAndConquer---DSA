
// // // Implementation of stack using array
#include<iostream>
using namespace std;
class Stack{
 int arr[5];
 int topIdx = -1;

 public:
    // push
    void push(int val){
        if(topIdx == 4){
    cout<<"Stack overflow"<<endl;
    return; 
        }
        arr[++topIdx] = val;
   
    }

    void pop(){
  if(isEmpty()){
    cout<<"stack Underflow\n";
    return;
  }
  topIdx--;
    }

    int top(){
        if(isEmpty()){
            cout<<"stack is empty\n";
            return -1;
        }
       return arr[topIdx];

    }
    bool isEmpty(){
       return topIdx == -1;
    }
    void print(){
      for(int i = 0; i<=topIdx; i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
   
};
int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    s.print();
    return 0;
}
