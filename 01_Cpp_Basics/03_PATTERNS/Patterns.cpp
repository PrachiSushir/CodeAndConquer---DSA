//  // Square Pattern
// #include<iostream>
// using namespace std;
//  int main(){
//     for(int i = 1; i<=4; i++){
//         for(int j = 1; j<=4; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
//  }

// // ==========================================================================================
//  //Star Pattern

// #include<iostream>
// using namespace std;
//  int main(){
//     int n = 4;
//     for(int i = 1; i<=n; i++){
//         for(int j = 1    ; j<=i; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
//  }

// // ============================================================================================
//  // Print inverted star pattern

// #include<iostream>
// using namespace std;
//  int main(){

//     int n = 4;
//     for(int i = 0; i<=n; i++){
//         for(int j = 0; j<=n-i-1; j++){ // or from  i & j = 1 we can also use n-i+1 
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
//  }

//  // ============================================================================================
// //  //Print half pyramid pattern

// #include<iostream>
// using namespace std;
//  int main(){
//     int n = 4;
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=i; j++){ 
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
//  }

// //==============================================================================================
// //Print character Pyramid pattern

// #include<iostream>
// using namespace std;
//  int main(){
//     int n = 4;
//     char ch = 'A';
//     for(int i = 0; i<=n; i++){
//         for(int j = 0; j<=i; j++){ 
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
//  }
 
// //=============================================================================================
//  //Hollow rectangle pattern 

// #include<iostream>
// using namespace std;
//  int main(){
//     int n = 4;
//     for(int row = 1; row<=n; row++){
//         for(int col = 1; col<=n; col++){ 
//            if(row==1 || row==n || col==1 || col==n){
//             cout<<"* ";
//            }
//            else{
//             cout<<"  ";
//            }
//         }
//         cout<<endl;
//     }
//     return 0;
//  }

//  //OR

// #include<iostream>
// using namespace std;
//  int main(){
//     int n = 4;
//     for(int i= 1; i<=n; i++){
//         cout<<"*";
//         for(int j = 1; j<=n-1; j++){ 
//            if(i==1 || i==n){
//             cout<<"*";
//            }
//            else{
//             cout<<" ";
//            }
//         }
//         cout<<"*"<<endl;
//     }
//     return 0;
//  }

// //============================================================================================
// //Inverted & Rotated Half-pyramid
// #include<iostream>
// using namespace std;
//  int main(){
//     int n = 4;
//     for(int row = 1; row<=n; row++){
//     // //spaces
//         for(int col = 1; col<=n-row; col++){ 
//             cout<<" ";
//     }
//     // //starts
//     for(int col = 1; col<=row; col++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
//     return 0;
//  }


//  //=============================================================================================
// //Floyd's Triangle

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//   int val = 1;
//     for(int i=1; i<=n; i++){
//        for(int j=1; j<=i; j++){
//         cout<<val;
//         val++;
        
//        }
//        cout<<endl;
//     }
//     return 0;
// }


// //============================================================================================
// //Diamond Pattern

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//   int val = 1;
//     for(int i=1; i<=n; i++){
//        for(int j=1; j<=i; j++){
//         cout<<val;
//         val++;
//        }
//        cout<<endl;
//     }
//     return 0;
// }

