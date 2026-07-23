
#include<iostream>
using namespace std;
int decreasing(int n){
  if(n==1){
    return 1;
  }
  cout<<n<<" ";
   decreasing(n-1);
}
int main(){
    cout<<decreasing(5);
    return 0;
}

