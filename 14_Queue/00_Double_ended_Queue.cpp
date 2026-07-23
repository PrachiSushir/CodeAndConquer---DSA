#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>deq;
    // pushFront
deq.push_front(2);
deq.push_front(1);

// pushBack
deq.push_back(3);
deq.push_back(4);

// popback
deq.pop_back();

// popfront
deq.pop_front();

cout<<deq.front()<<" ";   //2
cout<<deq.back();    
    return 0;
}