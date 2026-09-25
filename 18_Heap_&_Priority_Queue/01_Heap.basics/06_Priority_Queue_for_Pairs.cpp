// // max heap on the basis of 1st value(string)

#include<iostream>
#include<queue>
using namespace std;

struct comparePair {
    bool operator () (pair<string, int> &p1, pair<string, int> &p2){
        return p1.second < p2.second;
    }
};

int main(){
 priority_queue<pair<string, int>, vector<pair<string, int>>, comparePair> pq;     //default - maxHeap 

pq.push(make_pair("aman", 2));     
pq.push(make_pair("bhumika", 3));
pq.push(make_pair("chetan", 1));

while(!pq.empty()){
  cout<<"Top : "<<pq.top().first<<" , "<<pq.top().second<<endl;
  pq.pop();
}
    return 0;
}


// // max heap on the basis of 2nd value(int)

// #include<iostream>
// #include<queue>
// using namespace std;

// struct comparePair {
//     bool operator () (pair<string, int> &p1, pair<string, int> &p2){
//         return p1.second < p2.second;
//     }
// };
// int main(){
//  priority_queue<pair<string, int>, vector<pair<string, int>>, comparePair> pq;     //default - maxHeap 

// pq.push(make_pair("aman", 2));     
// pq.push(make_pair("bhumika", 3));
// pq.push(make_pair("chetan", 1));

// while(!pq.empty()){
//   cout<<"Top : "<<pq.top().first<<" , "<<pq.top().second<<endl;
//   pq.pop();
// }
//     return 0;
// }


// min heap on the basis of 2nd value(int)

#include<iostream>
#include<queue>
using namespace std;
//  operator overloading
struct comparePair {
    bool operator () (pair<string, int> &p1, pair<string, int> &p2){
        return p1.second > p2.second;
    }

};
int main(){
 priority_queue<pair<string, int>, vector<pair<string, int>>, comparePair> pq;     

pq.push(make_pair("aman", 2));     
pq.push(make_pair("bhumika", 3));
pq.push(make_pair("chetan", 1));

while(!pq.empty()){
  cout<<"Top : "<<pq.top().first<<" , "<<pq.top().second<<endl;
  pq.pop();
}
    return 0;
}

