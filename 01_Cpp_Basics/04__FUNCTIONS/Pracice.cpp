// //Practice Qs. WAF to find the product of 2 numbers a & b
// #include<iostream>
// using namespace std;
//  int findProduct(int a,int b){
//     int product = a * b;
//     return product;
//  }
// int main(){
//      cout<<findProduct(10, 20);

//     return 0;
// }


// //Practce Qs. WAF to print a number is odd or even

// #include<iostream>
// using namespace std;
// bool isEven(int n){
//     if(n%2==0){
//         return true;
//     }else{
//         return false;
//     }
// }
// int main(){
//     cout<<isEven(4)<<endl;
//     return 0;
// }

// //WAF to print the facttorial of a number, n
// #include<iostream>
// using namespace std;
// int findFact(int n) {
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//       fact = fact * i;
//     }
//     cout<<fact<<endl;
//     return fact;
// }

// int main(){

// findFact(4);
// findFact(3);
// findFact(6);
// findFact(2);

//     return 0;
// }

// // WAF to print if a number is prime or not
// #include<iostream>
// using namespace std;
//  bool checkPrime(int n){
//     if(n==1){
//         return false;
//     }
//    for(int i = 2; i<n; i++){
//     if(n%i==0){
//       return false;
    
//    }
  
//  }
//  return true;
// }
// int main(){
//   cout<<checkPrime(3);
//     return 0;
// }

// //WAF to find the binomial coefficient for a given n & r
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact = 1;
//     for(int i = 1; i<=n; i++){
//         fact = fact * i;

//     }
//     return fact;
// }
// int binCoeff(int n, int r){
//     int val1 = factorial(n);
//     int val2 = factorial(r);
//     int val3 = factorial(n-r);
//     int result = val1/(val2 * val3);
//     return result;
// }
// int main(){
//    cout<<binCoeff(4,2)<<endl;

//     return 0;
// }


// //WAF print all primes in a range from 2 to n

#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i = 2; i<=sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void allPrimes(int n){
 for(int i = 2; i<=n; i++){
    if(isPrime(i)){
        cout<<i<<" ";
    }
 }
 cout<<endl;
}
int main(){
allPrimes(10);
    return 0;
}