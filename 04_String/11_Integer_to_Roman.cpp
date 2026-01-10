/*
APPROACH: Integer to Roman

1. Roman numerals are formed by using the largest possible symbol first.
2. Store all Roman numeral values along with their symbols in descending order.
   (Including special cases like 900 -> "CM", 4 -> "IV", etc.)
3. Start from the largest value and check:
   - While the given number is greater than or equal to the current value,
     append the corresponding Roman symbol to the result.
   - Subtract that value from the number.
4. Move to the next smaller value.
5. Continue this process until the number becomes zero.
6. The final string obtained is the Roman numeral representation.

This greedy approach works because Roman numerals always prefer
the highest possible value at each step.

# TIME & SPACE COMPLEXITY
Time Complexity: O(1)
- The algorithm iterates over a fixed list of Roman numeral values (13 symbols).
- Regardless of input size, the number of operations remains constant.

Space Complexity: O(1)
- Uses constant extra space for storing Roman symbols and result string.

# PRACTICAL / REAL-LIFE USES
1. Clock Design:
   - Roman numerals are commonly used on analog clock faces.

2. Book Chapters and Volumes:
   - Chapters, sections, and volumes in books often use Roman numerals.

3. Historical Representation:
   - Used in monuments, movie copyrights, and historical year markings.

4. Event Numbering:
   - Used in naming events like Olympics, Super Bowls, and royal titles.

5. Programming & Interviews:
   - Common interview problem to test greedy algorithm logic,
     mapping values, and string manipulation skills.

*/


#include <iostream>
#include <vector>
using namespace std;

string intToRoman(int num) {
    vector<pair<int, string>> values = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"},  {90, "XC"},  {50, "L"},  {40, "XL"},
        {10, "X"},   {9, "IX"},   {5, "V"},   {4, "IV"},
        {1, "I"}
    };

    string result = "";

    for (auto pair : values) {
        while (num >= pair.first) {
            result += pair.second;
            num -= pair.first;
        }
    }
    return result;
}

int main() {
    int num = 1994;
    cout << "Roman Numeral: " << intToRoman(num);
    return 0;
}
