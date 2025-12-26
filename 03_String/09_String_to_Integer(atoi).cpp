#include<iostream>
#include<string>
#include<climits>
#include<cctype>
using namespace std;
int myAtoi(string s){
    int i=0;
    int n = s.length();
    int sign = 1;
    long long num = 0;
    // skip leading spaces
    while(i<n && s[i]==' '){
        i++;
    }
    // check sign
    if(i<n && s[i]=='-'){
        sign = -1;
        i++;
    }
    else if(i < n && s[i] == '+'){
        i++;
    }
    // Read digits
    while(i<n && isdigit(s[i])) {
        int digit = s[i] - '0';

    
    // Overflow check
    if(num > INT_MAX/10 || (num == INT_MAX/10 && digit > 7)){
   if(sign == 1){
    return INT_MAX;
   } else{
    return INT_MIN;
   }
    }
   num = num* 10 + digit;
   i++;

}
// apply sign 
return num * sign;

}
int main(){
    string input = "   -123abc";
    cout<<"converted integers: "<<myAtoi(input)<<endl;
    return 0;
}