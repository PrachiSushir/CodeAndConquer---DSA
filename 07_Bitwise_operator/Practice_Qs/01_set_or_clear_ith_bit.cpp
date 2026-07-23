// //Qs. Write a function to update the ith bit in a number according to given value (0 or 1)
// Ex. num = 7, i = 2, val = 0 ====> 3
//     num = 7, i = 3, val = 1 ====>15

#include<iostream>
using namespace std;
void updateIthBit(int num, int i, int val){
    num = num & ~(1<<i);    //step 1: clear the ith bit

    num = num | (val << i);
    cout<<num<<endl;
}
int main(){
   updateIthBit(7, 2, 0);
    return 0;
}