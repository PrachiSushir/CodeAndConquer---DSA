// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
// priority_queue<int, vector<int>, greater<int>>pq;

// pq.push(5);
// pq.push(10);
// pq.push(12);
// pq.push(11);
// pq.push(7);

// while(!pq.empty()){
//     cout<<"top : "<<pq.top()<<endl;
//     pq.pop();
// }
//     return 0;
// }


// for string

#include<iostream>
#include<queue>
using namespace std;
int main(){
priority_queue<string, vector<string>, greater<string>>pq;

pq.push("helloworld");
pq.push("apnacollege");
pq.push("c++");
pq.push("alpha");


while(!pq.empty()){
    cout<<"top : "<<pq.top()<<endl;
    pq.pop();
}
    return 0;
}