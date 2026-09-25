
//  // creating class

// #include<iostream>
// #include<string>  //we declare string type data
// using namespace std;
//  class Teacher {
//      public:
//     // properties
//     string name;
//     string dept;
//     string sub;

//     //  methods / function/ member function
//         void changeDept(string newDept) {
//      dept = newDept;
//         }
//  };

// int main() {

//     //  creating object
//     Teacher t1;
//     // Teacher t2;
//     // Teacher t3;
//     t1.name = "prachi";
//     t1.dept = "electrical engineering";
   

//     t1.sub = "c++";
//     cout<<t1.name<<endl;

//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------
// // ***** setter and getter****// //
// --------------------------------------------------------------------------------------------------------
// #include<iostream>
// #include<string>
// using namespace std;
// class Student {
//     private:
//     string name;

//     public:
//     // attributes
//     int age;
//     string dept;
//     // function
//     // setter
//     void Gfname(string n) {
//         name = n;
//     }
//     // getter -->private values ki value get krne ke liye use kiya jata hain
//     string getGfname() {
//         return name;
//     }
// };
// int main() {
//     Student s1;
//     s1.Gfname("manchi");
//     cout<<"his gf name : "<<s1.getGfname()<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// class Teacher {
//     private:
//     double salary;

//     public:
//     string name;
//     string dept;

//     // setter

//     void setSalary(double s) {
//         salary = s;
//     }
//     // getter
//     void getSalary() {
//         cout<<salary<<endl;
//     }
// };
   
// int main() {
//     Teacher t1;
//     t1.name = "shraddha";
//     t1.dept= "cs";
//     t1.setSalary(25000);
//     t1.getSalary();

// }

// --------------------------------------------------------------------------------------------------------
// // *****Constructor******* // //
// --------------------------------------------------------------------------------------------------------
// //creating non parameterised constructor

// #include<iostream>
// #include<string>
// using namespace std;  //we declare string type data

//  class Teacher {
//      public:
//      Teacher() {
//        dept = "computer science"; // (dept is assign as comp sci to all(initialise with dept)
//     }
//     string name;
//     string dept;
// };
    
// int main() {
//     Teacher t1; //constructor cll
//     // t1.name = "prachi";
//     // t1.dept= "computer science";
//     // cout<<t1.dept<<endl;
//     // cout<<t1.name<<endl;
//     }

//   // // parameterised constructor
// #include<iostream>
// using namespace std;
// class Teacher{
//     public:
//     string name;
//     string sub;
//     string dept;
//     Teacher(string n, string s, string d) {
//         name = n;
//         sub = s; 
//         dept = d;
//     }
    
//         void getInfo() {
//             cout<<" name"<<name<<endl;
//             cout<<"sub"<<sub<<endl;

//         }
// };

// int main() {
//      Teacher t1("prachi" , "c++", "comp sci");
//      t1.getInfo();
//     return 0;
// }


// creating class
// #include<iostream>
// using namespace std;

// // defining class

// class Student{
//     string name;
//     int age;
//     int rollNr;

//     public:
//     Student(string n, int a, int r) {
//         name = n;
//         age = a;
//         rollNr = r;
//     }

//         void display() {
//             cout<<"name : " <<name<<endl;
//             cout<<"age :"<<age<<endl;
//             cout<<" rollNr :"<<rollNr<<endl;

//         } 
// };
// int main() {
//     Student s1("prachi", 20, 101);
//     s1.display();
//     return 0;

// }

//  // defining constructor
// #include<iostream>
// using namespace std;
// class Student{
//     public:
//     string name;
//     int age;
//     public:
//     Student() {
//         name = "prachi";
//         age = 0;
//     }
//     void display() {
//         cout<<"name :"<<name<<endl;
//         cout<<"age"<<age<<endl;
//     }

// };
// int main() {
//     Student s1;
//     s1.display();
//     return 0;
// }

// // this pointer
// #include<iostream>
// using namespace std;
// class Student{
//     string name;
//     string age;
//     public:
//     Student(string name, int age) {
//         this->name = name;
//         this->age = age;
//     }
//     void display() {
//         cout<<"name : "<<name<<endl;
//         cout<<"age : "<<age;

//     }

// };
   
// int main() {
//     Student s1("prachi", 20);
//     s1.display();
//     return 0;
// }


 //============// copy constructor=================
//  #include<iostream>
//  using namespace std;
//  class Student {
//     public:
//     string name;
//     int age;
//     int rollNr;

//     // parameterized const
//     Student(string n, int a, int r) {
//         this ->name = n;
//         this->age = a;
//         this ->rollNr = r;
//     }

//         // copy constructor
//         Student(const Student &s ) {
//             cout<<"hii i am copy const"<<endl;
//             name = s.name;
//             age = s.age;
//             rollNr = s.rollNr;
            
//         }
//         void display() {
//             cout<<"name :"<<name<<endl;
//             cout<<"age :"<<age<<endl;
//             cout<<"rollNr :"<<rollNr<<endl;
            
//         }

//  };
//  int main() {
//     Student s1("prachi", 20, 101);
//     // Student s2;
//     Student s2 = s1;
//   // // Student s2(s1);  //default copy constructor
//     s1.display();
//     s2.display();
//     return 0;
//  }
// ---------------------------------------------------
// //Ex. 2 of copy constructor
//-----------------------------------------------------
// #include<iostream>
// using namespace std;
// class Car{
//     public:
//     string name;
//     string color;

//     Car(string n, string c){
//         this->name = n;
//         this->color = c;
//     }
// };
// int main(){
//    Car c1("maruti 800","white");
//    Car c2(c1);
//    cout<<c2.name<<endl;
//    cout<<c2.color<<endl;
//     return 0;
// }

// here automatically copy constructor is created but if we can creat our own  copy constructor
// =============custom copy constructor=============
// #include<iostream>
// using namespace std;
// class Car{
//     public:
//     string name;
//     string color;

//     Car(string n, string c){
//         this->name = n;
//         this->color = c;
//     }

//     Car(Car &original){
//         // //now this custom copy constructor will call
//         cout<<"copying original to new..\n";
//         name = original.name;
//         color = original.color;
//     }
// };
// int main(){
//    Car c1("maruti 800","white");
//    Car c2(c1);
//    cout<<c2.name<<endl;
//    cout<<c2.color<<endl;
//     return 0;
// }

// ----------------------------------------------------
// compilers generally creates a shallow copy for array
// ----------------------------------------------------
// #include<iostream>
// using namespace std;
// class Car{
//     public:
//     string name;
//     string color;
//     int *mileage;

//     Car(string n, string c){
//         this->name = n;
//         this->color = c;
//         mileage = new int; //Dynamic allocation
//         *mileage = 10;
//     }

//     Car(Car &original){
//         // //now this custom copy constructor will call
//         cout<<"copying original to new..\n";
//         name = original.name;
//         color = original.color;
//         mileage = original.mileage;
//     }
// };
// int main(){
//    Car c1("maruti 800","white");
//    Car c2(c1);
//    cout<<c2.name<<endl;
//    cout<<c2.color<<endl;
//    cout<<*c2.mileage<<endl;   //c2 is also pointing to the same memory
//    //if we chane c2 mileage, the change will also reflect in c1
//    cout<<*c1.mileage<<endl;
//     return 0;
// }


// //=============Deep copy=============================
// #include<iostream>
// using namespace std;
// class Car{
//     public:
//     string name;
//     string color;
//     int *mileage;

//     Car(string n, string c){
//         this->name = n;
//         this->color = c;
//         mileage = new int; //Dynamic allocation
//         *mileage = 12;
//     }

//     Car(Car &original){
//         // //now this custom copy constructor will call
//         cout<<"copying original to new..\n";
//         name = original.name;
//         color = original.color;
//         mileage = new int;
//         *mileage = *original.mileage;
//     }

//     // //destructor 
//     ~Car(){
//         cout<<"deleting object...\n";
//         if(mileage !=NULL){
//             delete mileage;
//             mileage = NULL;
//         }
//     }    
// };
// int main(){
//    Car c1("maruti 800","white");
//    Car c2(c1);
//    cout<<c2.name<<endl;
//    cout<<c2.color<<endl;
//    *c2.mileage = 10;
//    cout<<*c2.mileage<<endl;   
//    cout<<*c1.mileage<<endl;  ///doubt
//     return 0;
// }

// inheritance////// ...single inheritance
// #include<iostream>
// using namespace std;

// // base class
// class Animal{
//     public:
//     void eat() {
//         cout<<"this animal eats food"<<endl;
//     }
// };

// // derived class(child) 
// class Dog : public Animal{
//     public:
//     void bark() {
//         cout<<"the dog barks"<<endl;
//     }

// };

// int main() {
//     Dog d1;
//     d1.eat(); //inherited from animal
//     d1.bark(); //define in dog
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class Teacher{
//     public:
//     string name;
//     int age;
//     int rollnr;
//     Teacher(string n, int a, int r) {
//         name = n;
//         age = a;
//         rollnr = r;
//     }
//      void display() {
//         cout<<"name : "<<name<<endl;
//         cout<<"age :"<<age<<endl;
//           cout<<"rollnr :"<<rollnr<<endl;
//      }


// };
// int main() {
//     Teacher t1("prachi", 20, 7);
//     Teacher t2= t1;;
    
//     t1.display();
//     return 0;
// }

// .......Ex. .......//

// #include<iostream>
// using namespace std;
// class Person{
//     public:
//     string name;
//     int age;

//     Person(string n, int a) {
//         name = n;
//         age = a;
//     }

//     void display() {
//         cout<<"name"<<name<<endl;
//         cout<<"age"<<age<<endl;
//     }
// };

// class Student : public Person{
//     public:
//     int rollNr;

//     Student( string n, int a, int r): Person(n, a) {
//     rollNr = r;
//     }
    
//     void displayStudent() {
//         display();
//         cout<<"rollNr : "<<rollNr<<endl;
//     }
// };
// class Teacher: public Person{
//     public:
//     string subject;

//     Teacher( string n, int a, string sub): Person(n, a){
//     subject = sub;
//     }

//     void displayTeacher() {
//         display();
//         cout<<"subject : "<< subject<<endl;
//     }
// };

// int main() {
//     Person p1("prachi", 20);


//     Student s1("chinu", 20, 100);
//     Teacher t1("shraddha", 35, "c++");

// cout<<".....person....."<<endl;
//     p1.display();
// cout<<".....student"<<endl;
//     s1.displayStudent();
// cout<<"teacher"<<endl;
//     t1.display();
//     return 0;
// }
// //-------------------------------------------------
//  ///...multilevel inheritance
// //-------------------------------------------------
// #include<iostream>
// using namespace std;
// class Person{
//     public:
//     string name;
//     int age;

//     Person(string n, int a) {
//         name = n;
//         age = a;
//     }
//     void display() {
//         cout<<"name"<<name<<endl;
//         cout<<"age"<<age<<endl;
//     }
// };

// class Student : public person{
//     public:
//     int rollNr;

//     Student(string n, int a, int r) : Person(n,a) {
//         rollNr = r;
//     }
//     void displayStudent() {
//         display();
//         cout<<"rollNr"<<rollNr<<endl;
//     }
// };

// class GraduatedStu : public Student{
//     public:

//     string Specialization;

//     GraduatedStu(string n. int a,string sp) {
//         specialization =sp;
//     }
// };
// int main() {
// GraduatedStu g1.display();
//     return 0;
// }

// //------------------------------------------------
// //Multiple inheritance
// //------------------------------------------------
#include<iostream>
#include<string>
using namespace std;
class Teacher{
    public:
    int salary;
    string subject;

};
class Student{
    public:
    int rollNr;
    float cgpa;
};
class TA : public Teacher, public Student{
  public:
  string name;

};

int main(){
    TA ta1;
    ta1.name = "Prachi Sushir";
    ta1.subject = "AI/ML";
    ta1.salary = 3000000;
    ta1.cgpa = 9.8;
    cout<<ta1.name<<endl;
    cout<<ta1.subject<<endl;
     cout<<ta1.salary<<endl;
      cout<<ta1.cgpa<<endl;
    

return 0;
}
// --------------------------------------------------
// //Hierarchial inheritance
// ---------------------------------------------------
// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//  void eat(){
//     cout<<"can eat";
//  }
//  void breath(){
//     cout<<"can breath";
//  }
// };

// class Bird : public Animal{
//     public:
//    void fly(){
//     cout<<"can fly";
//    }
// };
// class fish : public Animal{
//     public:
//     void swim(){
//         cout<<"can swim";
//     }
// };

// class mammal : public Animal{
//     public:
//     void walk(){
//         cout<<"can walk";
//     }
// };

// int main(){
//     Bird b1;
//     b1.eat();
//     b1.breath();
//     b1.fly();
    
//     return 0;
// }

// //Copy constructor & destructor
// #include<iostream>
// using namespace std;
// class Teacher{
//     public:
//     string name;
//     int age;
//     string dept;
//     string *sub;

//     Teacher(string n, int a, string d){
//         this->name = n;
//         this->age= a;
//         this->dept = d;
//         sub = new string;
//         *sub = "AI/ML";
//     }
//     // //Custom copy constructor
//     Teacher(Teacher &t1){
//         cout<<"Hii i am your custom copy constructor";
//         name = t1.name;
//         age = t1.age;
//         dept = t1.dept;
//         sub = new string;
//         *sub = *t1.sub;
//     }
//      void info(){
//      cout<<"Name : "<<name<<endl;
//      cout<<"Age : "<<age<<endl;
//      cout<<"dept : "<<dept<<endl;

//  }
// //  //Destructor
// ~Teacher(){
//     cout<<"Destructor had called";
//     if(sub!=NULL){
//    delete sub;
//    sub = NULL;
//     }
// }
// };
// int main(){
//     Teacher t1("Prachi",21,"IT");
//     Teacher t2(t1);
 
//    t1.info();
// //    cout<<"Subject : "<<*t1.sub<<endl;
// // cout<<"Subject : "<<*t1.sub<<endl;
//    t2.info();
// //    cout<<"Subject : "<<*t2.sub<<endl;

//    *t2.sub = "Drawing";
//   cout<<"Subject : "<<*t2.sub<<endl;
//   cout<<"Subject : "<<*t1.sub<<endl;
//     return 0;
// }

// ---------------------------------------------------
// Modes of inheritance
// ---------------------------------------------------
// #include<iostream>
// using namespace std;
// class Animal{
//     public:
  
//     void eat(){
//         cout<<"eats..\n";

//     }
//     void breath(){
//     cout<<"breath..\n";
//     }
// };

// class Fish : protected Animal{
// public:
// int fins;
// void swim(){
//     eat();
//     cout<<"swims..\n";
// }
// };
// int main(){
// Fish f1;
// f1.fins = 3;
// cout<<f1.fins<<endl;
// f1.swim();
// // f1.eat();
// // f1.breath();
//     return 0;
// }