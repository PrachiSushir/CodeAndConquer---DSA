#include<iostream>
using namespace std;
int pow(int x, int n){
    if(n==0){  
        return 1;
    }
   int halfPower = pow(x, n/2);
   int halfPowSquare = halfPower * halfPower;
   if(n%2 != 0){
    return x * halfPowSquare;
   }
   return halfPowSquare;
   
}
int main(){
    int x = 2;
    int n = 10;
    cout<<pow(x,n);
    return 0;
}

// //TC : O(log n)