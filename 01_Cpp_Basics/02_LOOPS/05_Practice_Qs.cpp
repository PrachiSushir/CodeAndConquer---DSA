// // Question1: WAP to find the Factorial of a number entered by the user.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact = fact * i;
//     }
//     cout<<"Factorial of "<<n<<" "<<"is: "<<fact<<endl;
//     return 0;
// }

// //Question2: WAP to print the multiplication table of a number,entered by the user

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int table;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=1; i<=10; i++){
//         table = n*i;
//         cout<<table<<endl;
//     }
   
//     return 0;
// }

// //Question3: WAP to input a number and check whether the number is an Armstrong number or not.

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter the number";
// cin>>n;
// int sum = 0;
// int original = n;
//   while(n>0){
//     int lastDig = n%10;
//     int cube = lastDig*lastDig*lastDig;
//     sum= sum+cube;
//    n = n/10;

//   }
//   if(original==sum){
//     cout<<"this is an armstrong num ";
//   } else{
//     cout<<"this is not an armstrong num";
//   }
//     return 0;
// }

// Question4: For a positive N, WAP that prints all the prime numbers from 2 to N.(Assume N>=2)

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     for(int num = 2; num <= n; num++) {
//         bool isPrime = true;

//         for(int i = 2; i <= sqrt(num); i++) {
//             if(num % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }

//         if(isPrime) {
//             cout << num << " ";
//         }
//     }

//     return 0;
// }
// //===========================================================================================

// //Question5: For a positive N, WAP that prints the first N Fibonacci numbers.(AssumeN>=2)
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter N: ";
//     cin >> n;

//     int a = 0, b = 1;

//     cout << a << " " << b << " ";

//     for(int i = 3; i <= n; i++) {
//         int c = a + b;
//         cout << c << " ";

//         a = b;
//         b = c;
//     }

//     return 0;
// }

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
 int firstNum = 0; 
 int secNum = 1;
 cout<<firstNum<<" "<<secNum<<" ";
 for(int i = 3; i<=n; i++){
 int thirdNum = firstNum + secNum;
   cout<<thirdNum<<" ";
 firstNum = secNum;
 secNum = thirdNum;
 }

    return 0;
}