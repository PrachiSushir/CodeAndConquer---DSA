// #include<iostream>
// using namespace std;
// int main(){ 
//     int i = 1;
//     while(i<=10){
//         if(i==3){
//            break;
//         }
//   cout<<i;
//  cout<<endl;
//   i++;
//     }

//     return 0;
// }

//  // Write a program where user can keep entering numbers till they enter a multiple of 10

#include<iostream>
using namespace std;
int main(){ 
    int n;
    while(true){
    cout<<"enter a number";
     cin>>n;
     if(n%10==0){
        break;
     }
     cout<<"you entered "<<n<<endl;
    }
    return 0;
}

