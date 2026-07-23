//  // Count from 1 to n
// #include<iostream>
// using namespace std;
// int main(){
//     int i =1;
//     while(i<=5){
//         cout<<i<<endl;
//         i++;
//     }
//     return 0;
// }

//  // Print the sum of digits of a number using while loop

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 10829;
//     int sum = 0;
    
//      while(n>0){
//         int lastDig = n%10;
//          sum+=lastDig;
//          n = n/10;
//      }
//      cout<<"sum : "<<sum;
    

//     return 0;
// }

// //Print the sum of odd digits

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 10829;
//     int sum = 0;
//     while(n>0){
//      int lastDig = n%10;
    
//      if(n%2!=0){
//         sum+=lastDig;
//      }
//      n = n/10;
//     }
//     cout<<"sum = "<<sum<<endl;
   
//     return 0;
// }

//  //Print the digits of a given number in reverse using while loop

// #include<iostream>
// using namespace std;
// int main(){
// int n = 12345;

// while(n>0){
//    int lastDig= n%10;
//    cout<<lastDig;
//    n = n/10;
// }
// return 0;
// }


#include<iostream>
using namespace std;
int main(){
int n = 12345;
int result = 0;

while(n>0){
   int lastDig= n%10;
   result = result * 10 + lastDig;
   n = n/10;
}
cout<<result;
return 0;
}


