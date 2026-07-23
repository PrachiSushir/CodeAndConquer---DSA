// #include<iostream>
// using namespace std;
//  int sum = 0;
// int sumofN(int n){
   
//   if(n==0){
//     return sum;
//   }
//   sum+=n;
//    sumofN(n-1);
//     // cout<<n<<" ";
// }
// int main(){
//     cout<<sumofN(5);
//     return 0;
// }

// --------------------OR--------------------------------
#include<iostream>
using namespace std;

int sum(int n){
   
  if(n==1){
    return 1;
  }
 return n + sum(n-1);
   
}
int main(){
    cout<<sum(5);
    return 0;
}

