// #include<iostream>
// #include<vector>
// using namespace std;
// int gridWays(int r, int c, int n, int m){
   
//     if(r==n-1 && c==m-1){
//     return 1;
//     }

//     if(r>=n || c>=m){
//      return 0;
//     }
//     //   right choice
//   int val1 =  gridWays(r, c+1, n, m);

//     // down choice
//   int val2 =  gridWays(r+1, c, n, m);

//  return val1 + val2;

// }
// int main(){
  
//   int count = gridWays(0, 0, 3, 3);
//   cout<<count;
//     return 0;
// }

