/*
# PROBLEM: String to Integer (atoi) — LeetCode 8

# PROBLEM STATEMENT:
Given a string s, convert it into a 32-bit signed integer.
The conversion follows these rules:
1. Ignore leading whitespaces.
2. Check for optional '+' or '-' sign.
3. Read consecutive digits and form the number.
4. Stop conversion when a non-digit character appears.
5. If the number goes outside the 32-bit signed integer range,
   clamp it to INT_MAX or INT_MIN.
6. If no valid number exists, return 0.

Valid range:
-2^31 <= result <= 2^31 - 1

APPROACH (Beginner Friendly):
1. Start from index 0 and skip all leading spaces.
2. Check if the next character is '+' or '-':
   - Set sign accordingly.
3. Initialize result as long long to safely detect overflow.
4. Traverse the string while characters are digits:
   - Convert each digit and add it to result.
   - Before adding, check for overflow.
5. If overflow occurs:
   - Return INT_MAX for positive
   - Return INT_MIN for negative
6. Multiply result with sign and return final value.


# TIME COMPLEXITY:
O(n)
- We scan the string only once.

# SPACE COMPLEXITY:
O(1)
- Only constant extra space is used.

# REAL-LIFE APPLICATION:
• Parsing numeric input from user text
• Reading numbers from configuration files
• Converting string data received from APIs
• Handling command-line arguments
• Compiler and interpreter token processing
• Input validation in real software systems

*/
//  Logic: 

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