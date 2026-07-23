// // //-------------------------------------------------------------------------------------------
// // // // Compile Time polymorphism 
// // //-------------------------------------------------------------------------------------------
// // // // 1. Function overloading
// // //-------------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;
// class Print{
// public:
// void show(int x){
//     cout<<"int: "<<x<<endl;
// }
// void show(string s){
//     cout<<"String: "<<s<<endl;
// }
// };
// int main(){
//     Print obj1;
//     obj1.show(25);
//     obj1.show("Aarambh");

//     return 0;
// }
// //-----------------------------------------------------------------------------------------------
// // 2. Operator overloading
// //----------------------------------------------------------------------------------------------- 

// #include<iostream>
// using namespace std;
// class Complex{
   
//     int real;
//     int imaginary;
//  public:
//     Complex(int r, int i){
//         real = r;
//         imaginary = i;
//     }

//     void showNum(){
//         cout<<real<<" + "<<imaginary<<"i"<<endl;
//     }

//     // Operator overloading====> here,{ Adds to objects}
//     Complex operator + (Complex &c2){
//       int resReal = this->real + c2.real;
//       int resImaginary = this->imaginary + c2.imaginary;
//       Complex c3(resReal, resImaginary);
//       return c3;
//     }
// };
// int main(){
//     Complex c1(1,2);
//     Complex c2(3,4);
//     c1.showNum();
//     c2.showNum();
//     Complex c3 = c1+c2;
//     c3.showNum();
//     return 0;
// }
//  // ====================For (-)====================================================
// #include<iostream>
// using namespace std;
// class Complex{
   
//     int real;
//     int imaginary;
//  public:
//     Complex(int r, int i){
//         real = r;
//         imaginary = i;
//     }

//     void showNum(){
//         cout<<real<<" - "<<imaginary<<"i"<<endl;
//     }

//     // Operator overloading 
//     Complex operator - (Complex &c2){
//       int resReal = this->real - c2.real;
//       int resImaginary = this->imaginary - c2.imaginary;
//       Complex c3(resReal, resImaginary);
//       return c3;
//     }
// };
// int main(){
//     Complex c1(1,2);
//     Complex c2(3,4);
//     c1.showNum();
//     c2.showNum();
//     Complex c3 = c1-c2;
//     c3.showNum();
//     return 0;
// }

// // // ---------------------------------------------------------------------------------------------
// // // Function overriding
// // // ---------------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;
// class Parent{
//     public:
//     void show(){
//         cout<<"parent class show..";

//     }
// };

// class Child : public Parent{
//  public:
//     void show(){
//         cout<<"Child class show..";

//     }
// };
// int main(){
//     Child child1;
//     child1.show();   // always child class will dominat
//     return 0;
// }

// //Virtual Function
// #include<iostream>
// using namespace std;
// class Parent{
//     public:
//     virtual void hello(){
//         cout<<"Parent hello\n";
//     }
// };
// class Child : public Parent {
//     public:
//     void hello(){
//         cout<<"Child hello\n";
//     }
// };
// int main(){
//   Child child1;
//   Parent *ptr;

//   ptr = &child1; //Run time binding
//   ptr->hello(); //virtual Function
//   return 0;

//     return 0;
// }

// // //--------------------------------------------------------------------------------------------------------
// //Abstraction
// ////---------------------------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;
//  // abstract class
// class Shape{
//     public:
//      virtual void draw() = 0; // abstract function or // pure virtual function
// };
// class Circle : public Shape{
//     public:
//     void draw(){
//         cout<<"Draw a circle\n";
//     }
// };
// class Square : public Shape{
//     public:
//     void draw(){
//         cout<<"Draw a square\n";
//     }
// };
// int main(){
//     Circle cir1;
//     cir1.draw();
//     Square squ1;
//     squ1.draw();

//     // Shape s1;     //error as it is an abstract class
//     // s1.draw();    
//     return 0;
// }

// // // ----------------------------------------------
// // // Static keyword
// // // ----------------------------------------------
// //1. *** Static variable in function***
// normal counter variable
// #include<iostream>
// using namespace std;
// void counter(){
//     int count = 0;
//     count++;
//     cout<<"count : "<<count<<endl;
// }
// int main(){
//   counter();
//   counter();
//   counter();
//     return 0;
// }

// // function with static keyword
// #include<iostream>
// using namespace std;
// void counter(){
//    static int count = 0;
//     count++;
//     cout<<"count : "<<count<<endl;
// }
// int main(){
//   counter();
//   counter();
//   counter();
//     return 0;
// }

// // 2. **** static in class***
// //normal class
// #include<iostream>
// using namespace std;

// class Example{
//     public:
//   int x = 0;

// };
// int main(){
//  Example eg1;
//  Example eg2;
//  Example eg3;

//  cout<<eg1.x++<<endl;
//  cout<<eg2.x++<<endl;
//  cout<<eg3.x++<<endl;

//     return 0;
// }

//  class with static keyword
// #include<iostream>
// using namespace std;

// class Example{
//     public:
//    static int x;   //declaration

// };
//  int Example::x = 0;  //initialisation or definition
// int main(){
//  Example eg1;
//  Example eg2;
//  Example eg3;

//  cout<<eg1.x++<<endl;
//  cout<<eg2.x++<<endl;
//  cout<<eg3.x++<<endl;

//     return 0;
// }

// //3. ****Static in object*****
// //Normal class - object :
// #include<iostream>
// using namespace std;
// class Example{
//     public:
//     Example(){
//         cout<<"Constructor call..\n";
//     }
//     ~Example(){
//         cout<<"Destructor call..\n";
//     }
// };
// int main(){
//   int a = 0;
//   if(a==0){
//      Example eg1;
//   }
//   cout<<"Code ending..\n";

//     return 0;
// }

// // // Object with static
// #include<iostream>
// using namespace std;
// class Example{
//     public:
//     Example(){
//         cout<<"Constructor call..\n";
//     }
//     ~Example(){
//         cout<<"Destructor call..\n";
//     }
// };
// int main(){
//   int a = 0;
//   if(a==0){
//     static Example eg1;
//   }
//   cout<<"Code ending..\n";

//     return 0;
// }

// //--------------------------------------------------
// //Friend function & classes
// //--------------------------------------------------
// #include<iostream>
// using namespace std;
// class A{
//     string secret = "secret data";
//     friend class B;
//     friend void revealSecret(A &obj);
    
// };
// class B{  //becomes a friend class of A
//     public:
//     void showSecret(A &obj){
//         cout<<obj.secret<<endl;
//     }

// };
// // //can also make a friend function
// void revealSecret(A &obj){
//     cout<<obj.secret<<endl;
// }

// int main(){
//   A a1;
//   B b1;
//   b1.showSecret(a1);
//   revealSecret(a1);
//     return 0;
// }


// ***Note: always a parent's constructor will call first and child's destructor call first
#include<iostream>
using namespace std;

class Parent{
    public:
    Parent(){
        cout<<"Parent constructor\n";
    }
     ~Parent(){
        cout<<"Parent Destructor\n";
    }
};
class Child: public Parent{
    public:
    Child(){
        cout<<"Child constructor\n";
    }
     ~Child(){
        cout<<"Child Destructor\n";
    }
};
int main(){
Child ch1;
    return 0;
}