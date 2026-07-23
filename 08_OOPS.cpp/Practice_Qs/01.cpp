// // Create a user class with properties : id (private), username (public) & password (private). Its Id should be initialized in a parameterised constructor. It should have a getter and setter for password.

// #include<iostream>
// #include<string>
// using namespace std;
// class User{
//     private:
//     int Id;
//     string password;

//     public:
//     string username;
//     User(int Id){
//         this-> Id /*(obj id) */ =  Id /*(passed parameter)*/;
//     }

//     // getter 
//     string getPassword(){
//         return password;
//     }

//     // setter
//     void setPassword(string password){
//       this->password = password;
//     }

// };
// int main(){
//     User user1(101);
//     user1.username = "prachiSushir";
//     user1.setPassword("abcd");
//     cout<<"username is : "<<user1.username<<endl;
//     cout<<"Password is : "<<user1.getPassword()<<endl;

//     return 0;
// }

// //Pridict the output
// Create a user class with properties : id (private), username (public) & password (private). Its Id should be initialized in a parameterised constructor. It should have a getter and setter for password.

#include<iostream>
#include<string>
using namespace std;
class Base{
    public:
   virtual void print(){
    cout<<"Base"<<endl;
   }  
   virtual ~Base(){
        cout<<"Base Destructor"<<endl;
    }
};
class Derived : public Base{
    public:
    void print(){
        cout<<"Derived"<<endl;
    }
     ~Derived(){
        cout<<"Derived Destructor"<<endl;
    }
};
int main(){
   Base *b = new Derived(); // Important Rule : Whenever a class has virtual functions and is used polymorphically:
   b->print();
   delete b;

    return 0;
}

