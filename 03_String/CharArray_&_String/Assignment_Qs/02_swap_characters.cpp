// //Question2: You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose two indices in a string(not necessarily different) and swap the characters at these indices. 

// #include<iostream>
// #include<string>
// using namespace std;
// bool isSame(string str1, string str2){
//     if(str1.length()!=str2.length()){
//         return false;
//     }
//     int diff = 0;
//     int diffChar1, diffChar2;

//     for(int i = 0; i<str1.length(); i++){
//         if(str1[i]!=str2[i]){
//             // 1st mismatch
//            if(!diff){
//                 diffChar1 = str1[i];
//                 diffChar2 = str2[i];
//             }
//             else{
//             // 2nd mismatch
//                 if(str1[i]!=diffChar2 || str2[i]!=diffChar1){
//                     return false;
//                 }

//             }
//             diff++;
//         }
//         if(diff>2){
//             return false;
//         }
//     }
//     if(diff==1){
//         return false;
//     }
//     return true;
// }

// int main(){
//     string str1 = "bank";
//     string str2 = "kanb";
//     cout<<isSame(str1,str2);
//     return 0;
// }


#include<iostream>
#include<string>
using namespace std;
bool isSame(string str1, string str2){
   if(str1.length()!=str2.length()){
    return false;
   }
   int diff = 0; 
   int diffChar1 = 0, diffChar2 = 0;

   for(int i = 0; i<str1.length(); i++){
   if(str1[i]!=str2[i]){
    if(!diff){ //1st mismatch
        diffChar1 = str1[i];
        diffChar2= str2[i];
    }else{ //2nd mismatch
        if(str1[i]!=diffChar2 || str2[i]!= diffChar1){
            return false;
        }
    }
    diff++;
   }
   if(diff>2){
    return false;
   }

   }
   if(diff==1){
    return false;
   }
  return true;
}

int main(){
    string str1 = "bank";
    string str2 = "kanb";
    cout<<isSame(str1,str2);
    return 0;
}