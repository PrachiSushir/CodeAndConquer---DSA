#include<iostream>
#include<vector>
using namespace std;
int firstOccurance(vector<int>vec, int i, int target){
    // //basecase
if(i==vec.size()){
    return -1;
}
// //target found
if(vec[i]==target){
    return i;
}
  return firstOccurance(vec, i+1, target);
}
int main(){
   vector<int>vec = {1,2,3,3,3,4,5};
   int target = 3;
   int i = 0;
   cout<<firstOccurance(vec,i,target);


    return 0;
}
