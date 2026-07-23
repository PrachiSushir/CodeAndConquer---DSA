#include<iostream>
#include<deque>
using namespace std;
class Stack{
deque<int>deq;

public:

// push
void push(int data){
 deq.push_front(data);
}
// pop
void pop(){
 deq.pop_front();
}

// top
int top(){
return deq.front();
}

bool empty(){
    return deq.empty();
}
};
int main(){
    Stack s;
    for(int i = 1; i<=5; i++){
        s.push(i);
    }
    for(int i = 1; i<=5; i++){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}