#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void printList(list<int>ll){
 list<int>::iterator itr;
 for(itr = ll.begin(); itr != ll.end(); itr++){
    cout<<(*itr)<<"-->";
 }cout<<"NULL"<<endl;
}

int main(){
    list<int>ll;

     ll.push_back(3);
     ll.push_back(4);
     ll.push_front(2);
     ll.push_front(1);
    
     printList(ll);
    //  size
    cout<<ll.size()<<endl;
    // front()
    cout<<"Head : "<<ll.front()<<endl;
    // back()
     cout<<"Tail : "<<ll.back()<<endl;
    //  pop front
    ll.pop_front();
    // pop back
    ll.pop_back();
     printList(ll);
    return 0;
}
