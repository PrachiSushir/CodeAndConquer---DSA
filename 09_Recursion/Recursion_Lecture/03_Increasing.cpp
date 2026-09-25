
// #include<iostream>
// using namespace std;
// void decreasing(int n){
//   if(n==1){
//     cout<<1<<" ";
//     return;
//   }
// //   
//    decreasing(n-1);
//     cout<<n<<" ";
// }
// int main(){
//     decreasing(5);
//     return 0;
// }

// -------------------------OR--------------

#include<iostream>
using namespace std;
void increasing(int n){
  if(n==0){
    
    return;
  }

   increasing(n-1);
    cout<<n<<" ";
}
int main(){
    increasing(5);
    return 0;
}
