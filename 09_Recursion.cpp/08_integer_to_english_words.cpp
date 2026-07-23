/*

# PROBLEM: INTEGER TO ENGLISH WORDS

# Problem Statement:
Given a non-negative integer num, convert it into its English
words representation.

# Examples:
Input: 123
Output: "One Hundred Twenty Three"

Input: 12345
Output: "Twelve Thousand Three Hundred Forty Five"

Input: 1234567
Output: "One Million Two Hundred Thirty Four Thousand Five Hundred Sixty Seven"

Input: 0
Output: "Zero"

# INTUITION

Humans read numbers in groups of 3 digits:

1,234,567 = 1 Million + 234 Thousand + 567

So we:
1. Break the number into chunks (Billion, Million, Thousand, Rest)
2. Convert each chunk (< 1000) into words
3. Add the correct unit name (Thousand, Million, etc.)

# APPROACH

Step 1: If num == 0 → return "Zero"

Step 2: Create word arrays:
- Words from 1–19
- Words for multiples of 10 (20, 30, … 90)

Step 3: Create a helper function to convert numbers < 1000

Helper Rules:
• If num < 20 → direct word
• If num < 100 → tens word + recurse for last digit
• If num >= 100 → "X Hundred" + recurse for remainder

Step 4: Process large units one by one:
• Billion  = num / 1,000,000,000
• Million  = num / 1,000,000
• Thousand = num / 1,000
• Rest     = remaining part

For each part:
If value > 0 → convert using helper + add unit name

## TIME & SPACE COMPLEXITY

# Time Complexity: O(1)
Because integer size is limited (max 10 digits)

# Space Complexity: O(1)
Only fixed arrays and recursion stack of small depth

# REAL LIFE APPLICATIONS
- Bank cheque systems (amount in words)
- Billing & invoice software
- Government/legal documents
- Payment receipts
- Text-to-speech systems for numbers

*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Words for numbers 1–19
    vector<string> belowTwenty = {
        "", "One", "Two", "Three", "Four", "Five", "Six",
        "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve",
        "Thirteen", "Fourteen", "Fifteen", "Sixteen",
        "Seventeen", "Eighteen", "Nineteen"
    };

    // Words for multiples of ten
    vector<string> tens = {
        "", "", "Twenty", "Thirty", "Forty", "Fifty",
        "Sixty", "Seventy", "Eighty", "Ninety"
    };

    // Convert number less than 1000 to words
    string helper(int num) {
        if (num == 0)
            return "";

        else if (num < 20)
            return belowTwenty[num] + " ";

        else if (num < 100)
            return tens[num / 10] + " " + helper(num % 10);

        else
            return belowTwenty[num / 100] + " Hundred " + helper(num % 100);
    }

    string numberToWords(int num) {
        if (num == 0)
            return "Zero";

        string result = "";

        // Billions
        if (num >= 1000000000) {
            result += helper(num / 1000000000) + "Billion ";
            num %= 1000000000;
        }

        // Millions
        if (num >= 1000000) {
            result += helper(num / 1000000) + "Million ";
            num %= 1000000;
        }

        // Thousands
        if (num >= 1000) {
            result += helper(num / 1000) + "Thousand ";
            num %= 1000;
        }

        // Remaining hundreds
        if (num > 0) {
            result += helper(num);
        }

        // Remove trailing space
        while (!result.empty() && result.back() == ' ')
            result.pop_back();

        return result;
    }
};

int main() {
    Solution obj;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "In words: " << obj.numberToWords(num) << endl;

    return 0;
}