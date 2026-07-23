// //Question1: Count how many times lower case vowels occurred in a String entered by the user.

// #include<iostream>
// using namespace std;
// int countVowels(string str, string vowels){
//     int count = 0;
//     for(int i = 0; i<str.length(); i++){
//         for(int j = 0; j<vowels.length(); j++){
//              if(str[i]==vowels[j]){
//                 count++;
//              } else{
//                 continue;
//              }
//         }
//     } 
//     return count;
// }
// int main(){
//     string str = "apPle education";
//     string vowels= {'a','e','i','o','u'};
//     cout<<countVowels(str, vowels);
//     return 0;
// }
//  //TC: O(n * 5)
// ==============================Optimized approach==========================
#include<iostream>
using namespace std;
int countVowels(string str){
    int count = 0;
    for(int i = 0; i<str.length(); i++){
      
       if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
        count++;
       }
    } 
    return count;
}

int main(){
    string str = "apPle education";
    cout<<countVowels(str);
    return 0;
}

// //TC: O(n)=====> leser constant work

