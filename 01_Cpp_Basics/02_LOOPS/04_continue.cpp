// use continue to skip the 3 from 0 to 10 numbers

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0; i<10; i++){
//         if(i==3){
//             continue;
//         }
//         cout<<i<<endl;
//     }
//     return 0;
// }

// Write a program to show numbers entered by users except multiples of 10

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     while(true){
//         cout<<"enter a number: ";
//         cin>>n;
//         if(n%10==0){
//             cout<<"its multiple of 10 hence ignored"<<endl;
//             continue;
//         }
//         cout<<"You entered: "<<n<<endl;
//         n++;

//     }
//     return 0;
// }

//  // Check is a number prime or not
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     bool isPrime = true;
//     for(int i=2; i<=n-1; i++){
//         if(n%i==0){
//             isPrime = false;
//             break;
//         }
//     }
//     if(isPrime==false){
//         cout<<"this is not a prime number"<<endl;
//     }else{
//         cout<<"this is a prime number"<<endl;
//     }
//     return 0;
// }

// Optimized version of check a prime
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n = 5;
    bool isPrime = true;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime==false){
        cout<<"this is not a prime number"<<endl;
    }else{
        cout<<"this is a prime number"<<endl;
    }
    return 0;
}


