// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// void printSubsets(string str, string subset){
//    if(str.size()==0){
//     cout<<subset<<"\n";
//     return;
//    } 
//     char ch = str[0];
   
//     printSubsets(str.substr(1,str.size()-1), subset+ch);   // yes choice
//     printSubsets(str.substr(1,str.size()-1), subset);      //No choice

// }

// int main(){
// string str = "abc";
// string subset = "";
// printSubsets(str, subset);
//     return 0;
// }

// TC : O(2^n);
// SC : O(n)