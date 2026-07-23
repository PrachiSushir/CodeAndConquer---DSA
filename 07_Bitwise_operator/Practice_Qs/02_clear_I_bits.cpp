// //Write a function to clear last i bits of a number
// Ex. n = 15, i = 2====>12

#include<iostream>
using namespace std;
void clearIBits(int n , int i){
    int bitMask = (~0) << i;
    n = n & bitMask;
    cout<<n<<endl;

}
int main(){
    clearIBits(15, 2);
    return 0;
}