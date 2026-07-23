// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int *ptr = &a;

//     float pi = 3.14;
//     float *ptr2 = &pi;
    
//     cout<<&a<<"="<<ptr<<endl;
//     cout<<&pi<<"="<<ptr2;
//     return 0;
// }

// //space occupied by pointers
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int *ptr = &a;

//     float pi = 3.14;
//     float *ptr2 = &pi;


//     cout<<sizeof(ptr)<<endl;
//     cout<<sizeof(ptr2)<<endl;
//     return 0;
// }


// //pointer to pointer
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int *ptr = &a;
    
//     int **pptr = &ptr;
//     cout<<&ptr<<"="<<pptr;

//     return 0;
// }

// //Dereference operator
// //===> to get value whic is stored in the memory by using the memory address
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int *ptr = &a;
//     cout<<&a<<endl; //prints the address
//     cout<<*ptr; //prints the value stored in the address
// // // changing value stored at address 
//    *ptr = 20<<endl;
//    cout<<a<<endl;

//     return 0;
// }

// //NULL pointer
// #include<iostream>
// using namespace std;
// int main(){
    
// int *ptr; // garbage value
// cout<<ptr<<endl;

// int *ptr2 = NULL; // can't dereference as it gives segmentation error bcoz NULL ptr is not pointing to the perticular memory location
// cout<<ptr2;

//     return 0;
// }

// //Pass by reference an pass by value

// //pass by reference 
// #include<iostream>
// using namespace std;
// void changeA(int a){
//     a = 20;
//     cout<<a<<endl;
// }
// int main(){
//  int a = 10;
//  changeA(a);
//  cout<<a;
//     return 0;
// }

// //Pass by reference using pointers
// #include<iostream>
// using namespace std;
// void changeA(int *ptr){
//     *ptr = 20;
//     cout<<*ptr<<endl;
// }
// int main(){
//  int a = 10;
//  changeA(&a);
//  cout<<a;
//     return 0;
// }

// // reference variable

// #include<iostream>
// using namespace std;

// int main(){
//  int a = 10;
//  int &b = a; // a & b are pointing to the same mem location 
// //**NOTE** :We always have to initialize reference variable first without initialization the reference variable cannot created


//  cout<<a<<endl;
//  cout<<b<<endl;
//  a = 30;
//  cout<<a<<endl;
//  cout<<b;

//     return 0;
// }

// // //Pass by reference using reference variable
// #include<iostream>
// using namespace std;
// void changeA(int paramtr){
//         paramtr = 20;
//         cout<<paramtr<<endl;
//     }
// int main(){
    
//     int a = 10;
//     changeA(a);
//     cout<<a<<endl;
//     return 0;
// }


