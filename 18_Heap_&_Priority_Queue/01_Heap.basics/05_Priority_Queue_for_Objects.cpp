// priority on the basis of marks (max heap)

#include<iostream>
#include<queue>
using namespace std;

class Student{
    public:
    string name;
    int marks;

    Student(string name, int marks){
        this->name = name;
        this->marks = marks;
    }
  
bool operator < (const Student &obj) const {   //(same operator outside and inside)
 return this->marks < obj.marks;
}

};

int main(){
 priority_queue<Student> pq;

pq.push(Student("aman", 85));
pq.push(Student("bhumika", 95));
pq.push(Student("chetan", 65));

while(!pq.empty()){
  cout<<"Top : "<<pq.top().name<<" , "<<pq.top().marks<<endl;
  pq.pop();
}
    return 0;
}



// priority on the basis of rank
// #include<iostream>
// #include<queue>
// using namespace std;

// class Student{
//     public:
//     string name;
//     int rank;

//     Student(string name, int rank){
//         this->name = name;
//         this->rank = rank;
//     }
  
//     // // //operator overloading
// bool operator < (const Student &obj) const {   //(diff operator outside and inside)
//  return this->rank > obj.rank;
// }

// };

// int main(){
//  priority_queue<Student> pq;

// pq.push(Student("aman", 2));
// pq.push(Student("bhumika", 3));
// pq.push(Student("chetan", 1));

// while(!pq.empty()){
//   cout<<"Top : "<<pq.top().name<<" , "<<pq.top().rank<<endl;
//   pq.pop();
// }
//     return 0;
// }
