#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool isValid(string str){
    stack<int>s;
 for(int i = 0; i<str.size(); i++){
    char ch = str[i];
    if(ch =='(' || ch == '[' || ch == '{'){
        s.push(ch);     //if opening brackets

    }else{   //closing brackets
    if(s.empty()){    //insufficient number of opening brackets
      return false;
    }

// match
int top = s.top();
if((top == '(' && ch ==')') || (top == '{' && ch =='}') || (top == '[' && ch ==']')){
    s.pop();
} else{
    return false;   // no match found
}
    }
 }
 if(s.empty()){
    return true;
 }else{
    return false; 

 }  
 //or return s.empty();
}
int main(){
    string str1 = "([}])";
    string str2 = "([{}])";
    cout<<isValid(str1)<<endl;    //0
     cout<<isValid(str2)<<endl;    //1
    return 0;
}

// TC : O(n);
//SC : O(n);