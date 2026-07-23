// #include<iostream>
// using namespace std;
// int clearIthBit(int n, int i){
//     int bitMask = ~(1<<i);
//     return (n & bitMask);
// }
// int main(){
//     cout<<clearIthBit(6,1);
//     return 0;
// }

#include<iostream>
using namespace std;
int clearIthBit(int n, int i){
    int bitMask = 1<<i;

        return (n & bitMask);
    
}
int main(){
    cout<<setIthBit(6,3);
    return 0;
}