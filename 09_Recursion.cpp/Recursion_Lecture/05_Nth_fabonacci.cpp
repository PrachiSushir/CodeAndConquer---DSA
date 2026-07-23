#include<iostream>
using namespace std;
int fabonacci(int n){
   
  if(n==0 ||n==1){
    return n;    //0 , 1
  }
  
  return fabonacci(n-1)+ fabonacci(n-2);
    // cout<<n<<" ";
}
int main(){
    cout<<fabonacci(3);
    return 0;
}
