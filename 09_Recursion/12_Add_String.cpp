/*
# PROBLEM STATEMENT:
You are given two non-negative integers num1 and num2 represented as strings.
Return their sum as a string.
You must NOT convert the entire strings into integers or use any big integer library.
Addition must be done digit by digit, similar to manual addition.


# APPROACH :
We simulate the manual addition process from right to left.

1. Start from the last index of both strings.
2. At each step:
   - Take one digit from num1 (if available)
   - Take one digit from num2 (if available)
   - Add them along with carry from the previous step
3. Compute:
      currentDigit = sum % 10
      newCarry     = sum / 10
4. Make a recursive call to process the remaining left part of the strings.
5. While returning from recursion, append the current digit to the result.
6. Base Case:
   When both indices are less than 0 and carry is 0, return empty string.

This way, recursion handles the number column by column from right to left.

# TIME COMPLEXITY:
O(max(n, m))
Where n and m are lengths of num1 and num2.
We process each digit exactly once.

# SPACE COMPLEXITY:
O(max(n, m))
Due to recursion stack and the result string.

# REAL-LIFE APPLICATION OF THIS LOGIC:
This logic is used when dealing with very large numbers that cannot fit into
standard integer data types, such as:

• Banking systems handling huge financial values
• Cryptography (very large numbers in encryption)
• Scientific computations with big integers
• Calculators or software that support arbitrary precision arithmetic

Computers internally also use similar digit-by-digit logic when performing
arithmetic at the hardware level.

*/
// LOGIC:

#include <iostream>
using namespace std;

// Recursive helper function
string solve(string &num1, string &num2, int i, int j, int carry) {
    // Base case: no digits left and no carry
    if (i < 0 && j < 0 && carry == 0)
        return "";

    // Take digits if index is valid, otherwise 0
    int digit1 = (i >= 0) ? num1[i] - '0' : 0;
    int digit2 = (j >= 0) ? num2[j] - '0' : 0;

    int sum = digit1 + digit2 + carry;
    int currentDigit = sum % 10;
    int newCarry = sum / 10;

    // Recursive call for remaining left side
    string remaining = solve(num1, num2, i - 1, j - 1, newCarry);

    // Attach current digit at the end
    return remaining + char(currentDigit + '0');
}

// Main function
string addStrings(string num1, string num2) {
    return solve(num1, num2, num1.size() - 1, num2.size() - 1, 0);
}

int main() {
    string num1 = "56";
    string num2 = "78";
    cout << addStrings(num1, num2);  // Output: 134
}